#include "LogicLoginsystem.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>
#using <System.dll>
#include <regex>

using namespace System;
using namespace Text::RegularExpressions;


LogicLoginsystem::LogicLoginsystem() {
	db.ConnectionFunction();
}

//login-Funktion
std::string LogicLoginsystem::login(std::string username, std::string password) {

	//Request to database/check if user exists
	std::string select_query = "SELECT UserId, Username, Password, FirstName, LastName, Height, Weight, Gender, Birthday, Goal, Activity FROM user";
	const char* q = select_query.c_str();
	db.qstate = mysql_query(db.conn, q);

	if (!db.qstate) {
		db.res = mysql_store_result(db.conn);
		while (db.row = mysql_fetch_row(db.res)) {
			if (db.row[0] != NULL && db.row[1] != NULL && db.row[2] != NULL && db.row[3] != NULL && db.row[4] != NULL && db.row[5] != NULL && db.row[6] != NULL && db.row[7] != NULL && db.row[8] != NULL && db.row[9] != NULL && db.row[10] != NULL) {
				//It is checked whether the username and password entered by the user are available in the database
				if (db.row[1] == username && db.row[2] == password) {

					//User-Data store in Profil for further use
					profil->setUid(db.row[0]);
					profil->setUsername(db.row[1]);
					profil->setPassword(db.row[2]);
					profil->setFirstname(db.row[3]);
					profil->setLastname(db.row[4]);
					profil->setGroesse(db.row[5]);
					profil->setGewicht(db.row[6]);
					profil->setGeschlecht(db.row[7]);
					profil->setGeburtsdatum(db.row[8]);
					profil->setZiel(db.row[9]);
					profil->setBewegungsgruppe(db.row[10]);

					c->challengesSpeichern();

					profil->getWasserempfehlung();
					profil->getKalorienempfehlung();

					return "Login war erfolgreich.";
				}

			}
		}
		return "Login ist fehlgeschlagen.";
	}

	return "Error beim Ausführen der Query.";

}

//Registrieren-Funktion
void LogicLoginsystem::registr(std::string lastname, std::string firstname, std::string date, int height, int weight, char gender, std::string ziel, std::string bewegungsgruppe, std::string username, std::string password) {
	std::string heightString = std::to_string(height);
	std::string weightString = std::to_string(weight);

	//Query to create a new user in the database
	db.sqlAbfrage("INSERT INTO user (Username, Password, FirstName, LastName, Height, Weight, Gender, Birthday, Goal, Activity) VALUES ('" + username + "', '" + password + "', '" + firstname + "', '" + lastname + "'," + heightString + ", " + weightString + ",'" + gender + "','" + date + "', '" + ziel + "', '" + bewegungsgruppe + "'); ");
}


//Function to check password requirements
bool LogicLoginsystem::strongness(std::string& input) {
	//lower case, upper case, special char, number, min. 5 chars
	auto const regex = std::regex("^(?=.{5,15}$)(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])(?=.*[!@#$%^&*]).*$");
	bool const strong = std::regex_match(input, regex);
	return strong;
}


//Check if user already exists
bool LogicLoginsystem::userExists(std::string username, std::string uid) {
	//Eingabeparameter uid wird für den Aufruf beim Ändern der Nutzerdaten gebraucht
	//searching username in database
	std::string query = "SELECT Username FROM user WHERE Username='" + username + "' AND UserID <> " + uid +"; ";
	const char* q = query.c_str();
	db.qstate = mysql_query(db.conn, q);
	db.res = mysql_store_result(db.conn);
	while (db.row = mysql_fetch_row(db.res)) {
		if (db.row[0] != NULL) {		
			//if no rows, the user already exists
			if (mysql_num_fields(db.res) == 0) {
				return false;
			}
			else {
				return true;
			}

		}

	}
}

//update user-data
void LogicLoginsystem::update(std::string lastname, std::string firstname, int height, int weight, std::string ziel, std::string bewegungsgruppe, std::string username, std::string password) {
	std::string heightSTD = std::to_string(height);
	std::string weightSTD = std::to_string(weight);
	std::string uid = msclr::interop::marshal_as<std::string>(profil->getUid());

	db.sqlAbfrage("UPDATE user SET Username = '" + username + "', Password = '" + password + "', FirstName = '" + firstname + "', LastName = '" + lastname + "', Height = " + heightSTD + ", Weight = " + weightSTD + ", Goal = '" + ziel + "', Activity = '" + bewegungsgruppe + "' WHERE UserID = " + uid + ";");

}
