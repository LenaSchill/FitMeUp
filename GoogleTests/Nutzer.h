#pragma once
#include <iostream>
#include <string>


using namespace std;

class user {
public:
	user();

	string getUsername() { return username; };
	void setUsername(string username) { this->username = username; };

	string getPassword() { return password; };
	void setPassword(string password) { this->password = password; };

	string getFirstname() { return firstname; };
	void setFirstname(string firstname) { this->firstname = firstname; };

	string getLastname() { return lastname; };
	void setLastname(string lastname) { this->lastname = lastname; };

private:
	string username; //Primärschlüssel
	string password;
	string firstname;
	string lastname;
};

class nutzer : public user {
public:
	nutzer();

	string getGeburtstag() { return geburtstag; };
	void setGeburtstag(string geburtstag) { this->geburtstag = geburtstag; };

	string getGeschlecht() { return geschlecht; };
	void setGeschlecht(string geschlecht) { this->geschlecht = geschlecht; };

private:
	string geburtstag;
	string geschlecht;
};


class MyDataBase1 {
public:
	MyDataBase1();

	bool checkUsernameExists(string username);
	nutzer* findNutzerbyID(string username);
	nutzer addNutzer(nutzer nutzer);
	bool updateNutzerLastname(string username, string lastname);
	bool updateNutzerPassword(string username, string password);
	bool deleteNutzer(string username);
};