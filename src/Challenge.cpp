#include "Challenge.h"
#include "Nutzerprofil.h"
#include "Hilfsfunktionen.h"
#include <msclr\marshal_cppstd.h>

Challenge::Challenge() {
	db.ConnectionFunction();
	db2.ConnectionFunction();
}

//setter-Methoden
void Challenge::setBeschreibung(System::String^ newBeschreibung) {
	beschreibung = newBeschreibung;
}
void Challenge::setCid(System::String^ newCid) {
	cid = newCid;
}
void Challenge::setDauer(int newDauer) {
	dauer = newDauer;
}

void Challenge::setLastDate(int newDate) {
	lastDate = newDate;
}

void Challenge::setStartDate(int newDate) {
	startDate = newDate;
}

//Getter-Methoden
System::String^ Challenge::getCid() {
	return cid;
}
System::String^ Challenge::getBeschreibung() {
	return beschreibung;
}
int Challenge::getDauer() {
	return dauer;
}

int Challenge::getLastDate() {
	return lastDate;
}

int Challenge::getStartDate() {
	return startDate;
}


//returns a list with challenges, wich are suitabel to Status
System::Collections::Generic::List<Challenge^>^ Challenge::challengeGenerieren() { 
	//List to save recommended challenges
	System::Collections::Generic::List<Challenge^>^ chalEmpfehlungen = gcnew System::Collections::Generic::List<Challenge^>();

	//Fetch required attributes
	Nutzerprofil^ nutzer;
	nutzer->wasserstatusAktualisieren();
	nutzer->kalorienstatusAktualisieren();
	nutzer->sportstatusAktualisieren();
	std::string wasserstatus = msclr::interop::marshal_as<std::string>(nutzer->getWasserstatus());
	std::string kalorienstatus = msclr::interop::marshal_as<std::string>(nutzer->getKalorienstatus());
	std::string sportstatus = msclr::interop::marshal_as<std::string>(nutzer->getSportstatus());
	std::string uid = msclr::interop::marshal_as<std::string>(nutzer->getUid());

	//Search for a suitable challenges for water, calories and sport
	std::string select_query = "SELECT Cid, Beschreibung, Dauer FROM challenge WHERE Status ='" + wasserstatus + "' OR Status = '" + kalorienstatus + "' OR Status = '" + sportstatus + "'; ";
	const char* q = select_query.c_str();
	db.qstate = mysql_query(db.conn, q);
	if (!db.qstate) {
		db.res = mysql_store_result(db.conn);
		while (db.row = mysql_fetch_row(db.res)) {
			if (db.row[0] != NULL && db.row[1] != NULL && db.row[2] != NULL) {
				//Save the found ID, description and duration
				std::string cidSTD = db.row[0];
				System::String^ cid = gcnew System::String(cidSTD.c_str());
				std::string beschreibungSTD = db.row[1];
				System::String^ beschreibung = gcnew System::String(beschreibungSTD.c_str());
				int dauer = atoi(db.row[2]);

				//check, if challenge is already accepted
				System::Collections::Generic::List<Challenge^>^ chalAktuell = nutzer->getCallenges();
				bool exists = false;
				int laenge = chalAktuell->Count;
				for (int i = 0; i < laenge; i++) {
					if (chalAktuell[i]->getCid() == cid) {
						exists = true;
					}
				}

				//if challenge is not already accepted, save the description to result list
				if (exists == false) {
					Challenge^ c = gcnew Challenge();
					c->setCid(cid);
					c->setBeschreibung(beschreibung);
					c->setDauer(dauer);
					chalEmpfehlungen->Add(c);
				}
			}

		}
	}

	//no new Challenge available
	if (chalEmpfehlungen->Count == 0) {
		Challenge^ c = gcnew Challenge();
		c->setCid("- 1");
		c->setBeschreibung("Es ist für dich gerade keine neue Challenge verfügbar");
		c->setDauer(0);
		chalEmpfehlungen->Add(c);
	}

	return chalEmpfehlungen;
}

//add a new Challenge in Table ChallengeAnnahme
void Challenge::challengeEintragen(System::String^ beschreibung, System::String^ uid, System::String^ time) {
	Nutzerprofil^ nutzer;

	//cast for sql
	std::string uidSTD = msclr::interop::marshal_as<std::string>(uid);
	std::string timeSTD = msclr::interop::marshal_as<std::string>(time);
	std::string beschreibungSTD = msclr::interop::marshal_as<std::string>(beschreibung);

	//search cid and duration
	std::string cidSTD{};
	std::string select_query = "SELECT Cid, dauer FROM challenge WHERE beschreibung = '" + beschreibungSTD + "';";  
	const char* q = select_query.c_str();
	db.qstate = mysql_query(db.conn, q);
	db.res = mysql_store_result(db.conn);
	if (!db.qstate) {
		while (db.row = mysql_fetch_row(db.res)) {
			if (db.row[0] != NULL && db.row[1] != NULL) {
				cidSTD = db.row[0];
				System::String^ cidSystem = gcnew System::String(cidSTD.c_str());
				setCid(cidSystem);
				setBeschreibung(beschreibung);
				if (db.row[1] != NULL) {
					int dauer = atoi(db.row[1]);
				}
				else {
					System::Windows::Forms::MessageBox::Show("error beim ausführen der query");
				}

				setDauer(dauer);
			}
		}

	}
	//insert the Challenge-Object in Datebase and list
	if (cidSTD != "") {
		std::string insert_query = "INSERT INTO challengeAnnahme (Cid, UserID, StartDate, Status)  VALUES ('" + cidSTD + "', '" + uidSTD + "', '" + timeSTD + "', 'aktuell'); ";
		db.sqlAbfrage(insert_query);
		nutzer->getCallenges()->Add(this);
	}

}



//Check for failure/end of the challenge
void Challenge::challengeUeberpruefen() {
	Nutzerprofil^ profil;

	//Sets challenge to failed if not entered the day before
	int aktDate = getDate();
	std::string failedDate = std::to_string(getDayBefore(getDate()));
	std::string update_query = "UPDATE challengeAnnahme SET Status = 'gescheitert' WHERE ((InsertDate < " + failedDate + ") OR (InsertDate IS NULL AND StartDate <" + std::to_string(getDayBefore(aktDate)) + ") AND Status = 'aktuell'); ";
	db.sqlAbfrage(update_query);

	//Check if duration has expired
	for (int i = profil->getCallenges()->Count - 1; i >= 0; i--) {
		std::string cidSTD = msclr::interop::marshal_as<std::string>(profil->getCallenges()[i]->getCid());
		failedDate = getDate();
		int dauer = profil->getCallenges()[i]->getDauer();
		for (int i = 0; i < dauer; i++) {
			failedDate = std::to_string(getDayBefore(atoi(failedDate.c_str())));
		}
		std::string update_query = "UPDATE challengeAnnahme SET Status = 'beendet' WHERE StartDate <= " + failedDate + " AND Status = 'aktuell' AND Cid = " + cidSTD + "; ";
		db.sqlAbfrage(update_query);
	}
	//Update list of challenges in Nutzerprofil
	challengesSpeichern();
}



//Update Insert-Date, if Challenge was made today
void Challenge::datumUpdaten(System::String^ cid, System::String^ uid) {
	std::string aktDate = std::to_string(getDate());
	std::string cidSTD = msclr::interop::marshal_as<std::string>(cid);
	std::string uidSTD = msclr::interop::marshal_as<std::string>(uid);

	std::string update_query = "UPDATE challengeAnnahme SET InsertDate = " + aktDate + " WHERE Cid = " + cidSTD + " AND UserID = " + uidSTD + " AND Status = 'aktuell'; ";
	db.sqlAbfrage(update_query);
}



//Store current Challenges in Nutzerprofil
void Challenge::challengesSpeichern() {
	Nutzerprofil^ nutzer;
	nutzer->getCallenges()->Clear();

	//Search cid (and date of last update), of the accepted challenges
	std::string uid = msclr::interop::marshal_as<std::string>(nutzer->getUid());
	std::string select_query = "SELECT Cid, InsertDate, StartDate FROM challengeAnnahme WHERE UserId = " + uid + " AND Status = 'aktuell';";
	const char* q = select_query.c_str();
	db.qstate = mysql_query(db.conn, q);
	if (!db.qstate) {
		db.res = mysql_store_result(db.conn);
		while (db.row = mysql_fetch_row(db.res)) {
			std::string cid = db.row[0];

			int date = 0;
			if (db.row[1] == nullptr) {
				date = 0;
			}
			else {
				std::string dateSTD = db.row[1];
				date = atoi(dateSTD.c_str());
			}

			int startDate = atoi(db.row[2]);
			

			//Search for the associated challenge attributes to the challenge ID
			std::string select_query2 = "SELECT Beschreibung, Dauer FROM challenge WHERE Cid =" + cid + ";";
			const char* q2 = select_query2.c_str();
			db2.qstate = mysql_query(db2.conn, q2);
			if (!db2.qstate) {
				db2.res = mysql_store_result(db2.conn);
				while (db2.row = mysql_fetch_row(db2.res)) {
					if (db2.row[0] != NULL && db2.row[1] != NULL) {
						//Store result in Challenge-Object and add it to the list in Nutzerprofil
						Challenge^ c = gcnew Challenge();

						System::String^ cidSystem = gcnew System::String(cid.c_str());
						c->setCid(cidSystem);

						std::string beschreibungSTD = db2.row[0];
						System::String^ beschreibung = gcnew System::String(beschreibungSTD.c_str());
						c->setBeschreibung(beschreibung);

						std::string dauerSTD = db2.row[1];
						int dauer = atoi(dauerSTD.c_str());
						c->setDauer(dauer);

						c->setLastDate(date);
						c->setStartDate(startDate);

						nutzer->addChallenge(c);

					}
				}
			}
		}
	}
}

//return completed Challenges
System::Collections::Generic::List<System::String^>^ Challenge::abgeschlosseneHolen() {
	System::Collections::Generic::List<System::String^>^ abgeschlossen = gcnew System::Collections::Generic::List<System::String^>();
	Nutzerprofil^ profil = gcnew Nutzerprofil();
	std::string uid = msclr::interop::marshal_as<std::string>(profil->getUid());
	std::string select_query = "SELECT Cid FROM challengeAnnahme WHERE UserID = " + uid + " AND Status = 'beendet'; ";
	const char* q = select_query.c_str();
	db.qstate = mysql_query(db.conn, q);
	if (!db.qstate) {
		db.res = mysql_store_result(db.conn);
		while (db.row = mysql_fetch_row(db.res)) {
			if (db.row[0] != NULL) {
				//Save the found ID
				std::string cid = db.row[0];

				//Searching description
				std::string select_query2 = "SELECT Beschreibung FROM challenge WHERE Cid = " + cid + ";";
				const char* q2 = select_query2.c_str();
				db2.qstate = mysql_query(db2.conn, q2);
				if (!db.qstate) {
					db2.res = mysql_store_result(db2.conn);
					while (db2.row = mysql_fetch_row(db2.res)) {
						if (db2.row[0] != NULL){
							std::string beschreibungSTD = db2.row[0];
							System::String^ beschreibung = gcnew System::String(beschreibungSTD.c_str());

							abgeschlossen->Add(beschreibung);
						}
					}

				}
			}
		}
	}
	return abgeschlossen ;
}