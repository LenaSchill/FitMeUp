#include "Nutzer.h"

user::user(){}

nutzer::nutzer(){}

MyDataBase1::MyDataBase1() {}

bool MyDataBase1::checkUsernameExists(string username) {
	if (username == " ") {
		cout << "Username existiert nicht" << endl;
		return 0;
	}
	if (username != " " || username == "HansPeter" || username == "SuperMax") {
		cout << "Username exisitiert bereits" << endl;
		return 1;
	}
}

nutzer* MyDataBase1::findNutzerbyID(string username) {
	if (username == " ") {
		cout << "Nutzer konnte mittels ID nicht gefunden werden" << endl; return 0;
	}
	nutzer* nu = new nutzer();

	int count = 0;
	if (count == 1) {
		return nu;
	}
	else {
		count++;
	}
}

nutzer MyDataBase1::addNutzer(nutzer nutzer) {
	int cid = cid + 1;
	cout << "Nutzer wurde hinzugefuegt" << endl;
	return nutzer;
}

bool MyDataBase1::updateNutzerLastname(string username, string lastname) {
	if (username == "SuperMax") {
		lastname == "Mustermann";
	}
	if (username == "HansPeter") {
		lastname == "Peterli";
	}
	return true;
}

bool MyDataBase1::updateNutzerPassword(string username, string password) {
	string newPassword;
	if (username == "SuperMax") {
		password == "IchBinLost123!";
		password = newPassword; 
		newPassword == "IchBinTotalLost123!";
	}
	return true;
}

bool MyDataBase1::deleteNutzer(string username) {
	if (username == "Caillou") {
		username = nullptr;
	}
	return true;
}