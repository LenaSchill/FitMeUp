#pragma once
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "pch.h"
#include <stdio.h>
#include <regex>
#include "entity/errormassage.h"
#include "Nutzer.h"


using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;
using ::testing::Test;
using ::testing::MatchesRegex;
using ::testing::StartsWith;

//Gemockte Datenbank 

class DataBaseConnect {   //diese Klasse muss gemocked werden -> soll Datenbank nachstellen
public:
	virtual bool login(string username, string password) {
		return true;
	}
	virtual bool logout(string username) {
		return true;
	}
	virtual int fetchRecord() {
		return -1;
	}
	virtual bool registr(string lastname, string firstname, string date, int height, int weight, char gender, string ziel, string bewegungsgruppe, string username, string password) {
		return true;
	}
	virtual bool strongness(string& input) {
		return true;
	}
	virtual bool userExists(string username) {
		return true;
	}
};

class MockDB: public DataBaseConnect {   //Mock-Klasse
public:
	MOCK_METHOD0(fetchRecord, int());
	MOCK_METHOD1(logout, bool(string username));
	MOCK_METHOD2(login, bool(string username, string password));
	MOCK_METHOD3(registr, bool(string lastname, string firstname, string username));
	//MOCK_METHOD4(userExists, bool(string username));
	//MOCK_METHOD4(strongness, bool(string input));
	
};


class MyDataBase {
	DataBaseConnect &dbC;  
public:
	MyDataBase(DataBaseConnect &_dbC) : dbC(_dbC) {}
	int Init(string username, string password) {
		if (dbC.login(username, password) != true) {
			cout << "DB FAILURE" << endl; return 1;
		}
		else {
			cout << "DB SUCCESS" << endl; return 1;
		}
	}
	int Init1(string lastname, string firstname, string date, int height, int weight, char gender, string ziel, string bewegungsgruppe, string username, string password) {
		if (dbC.registr(lastname, firstname, date, height, weight, gender, ziel, bewegungsgruppe, username, password) != true) {
			cout << "Registrierung war nicht erfolgreich" << endl; return 0;
		}
		else {
			cout << "Registrierung war erfolgreich" << endl; return 1;
		}
	}
	int Init2(string username) {
		if (dbC.userExists(username) != true) {
			cout << "Dieser Nutzer existiert nicht" << endl; 
			//throw Exception("CUSTOMER_NOT_EXISTS");
			return 0;
		}
		else {
			cout << "Nutzer existiert bereits" << endl; return 1;
		}
	}
	
};

struct MyDataBase2 : public ::testing::Test {   //andere Möglichkeit Login-System zu überprüfen (Nutzer.cpp & Nutzer.h)
	string username = "MaxMustermann";
	string password = "IchBinLost123!";
	string username2 = "FitWieEinTurnschuh";

	MyDataBase1* myBase = new MyDataBase1;
	nutzer* nuinit = new nutzer();

	void SetUp() override {
		nuinit->setUsername("MaxMustermann");
		nuinit->setGeschlecht("männlich");
		nuinit->setGeburtstag("01.01.1999");
		nuinit->setPassword("IchBinCool123!");
		myBase->addNutzer(*nuinit);
	}

	void TearDown() override {
		myBase->deleteNutzer(username);
	}
};


class DB {              //ID's aus der gemockten Datenbank erhalten
	string id;

public:
	DB(string _id) : id(_id) {}
	string GetID() { return id; }
};


//Kalorien-Calculator - testet die Methoden kalorienAktualisieren() und getKalorien() aus Nutzerprofil
class KalorienCalculator {                 
public:
	KalorienCalculator();
	int calculateKalorien(double grundumsatz, double gewicht, string geschlecht);
};

KalorienCalculator::KalorienCalculator() {

}

int KalorienCalculator::calculateKalorien(double grundumsatz, double gewicht, string geschlecht) {
	double _grundumsatzFrau = 0.9 * gewicht * 24;
	double _grundumsatzMann = gewicht * 24;
	double _grundumsatz = 0;
	double gesamt;


	if (geschlecht == "Frau") {
		_grundumsatzFrau = 0.9 * gewicht * 24;
		cout << "JEIJ" << endl << _grundumsatzFrau << endl; return 1;
	}
	if (geschlecht == "Mann") {
		double _grundumsatzMann = gewicht * 24;
		cout << "HURRA" << endl << _grundumsatzMann << endl; return 1;
	}
	else {
		cout << "FAILED" << endl << _grundumsatz << endl; return 0;
	}
	//return roundf((gesamt = _grundumsatzFrau + _grundumsatzMann));
}


//Wasser-Calculator - testet die Methoden wasserAktualisieren() und getWasserStatus() aus FitMeUp
class WasserCalculator {
public: 
	WasserCalculator();
	int calculateWasser(int kalorien, int wasser, int gewicht);
	//int calculateWasserEmpfehlung(int was, double grundumsatz, double wasserempfehlung);
	int calculateWasserEmpfehlung(int gewicht, double height, int wasser);
};

WasserCalculator::WasserCalculator(){}

int WasserCalculator::calculateWasserEmpfehlung(int gewicht, double height, int wasser) {
	double grundumsatz;
	//double bedarf = (1.85 * 45)*0.03; //Größe * Gewicht * 0.03 (ohne Sport) = Wasser in Litern als Bedarf
	double bedarf = (height * gewicht) * 0.03; //ohne Sport
	//double _wasserempfehlung;
	double umsatz = 0;

	if (height > 0 && gewicht > 0) {
		bedarf = (height * gewicht) * 0.03;
		cout << bedarf << endl; return 1;
	}
	if (height < 0 || gewicht < 0 || height < 0 && gewicht < 0) {
		
		cout << "Fehler!" << endl; return 0;
	}
	if (wasser > bedarf) {
		cout << "Zu viel Wasser!" << endl; return 1;
	}
	if (wasser = bedarf) {
		cout << "Wasser ist im Lot!" << endl; return 1;
	}
	if (wasser < bedarf) {
		cout << "Zu wenig Wasser!" << endl; return 1;
	}

	//_wasserempfehlung = round(bedarf * 100 + .5) / 100.0;
}

int WasserCalculator::calculateWasser(int kalorien, int wasser, int gewicht) { //Wasser wird in ml angegeben
	double bedarf = 40 * gewicht; //Empfohlener Bedarf 40ml Wasser pro Kg 
	double gesamtwasser;

	if (kalorien > 0 || gewicht > 0) {
		gesamtwasser = kalorien / 1000; //gibt das Gesamtwasser in Liter an (z.B. 2500kcal eingenommen, mind. 2.5L Wasser empfohlen)
		cout << bedarf << endl << gesamtwasser << endl;
		return 1;
	}
	if(kalorien < 0 || gewicht < 0 || wasser < 0){
		cout << "Failed" << endl;
		return 0;
	}
	else {
		cout << "Fehler! Failed!" << endl;
		return 0;
	}
}

//Verknüpfung für errormessage.h zum Ausgeben von Fehlermeldungen
/*class Exception : public exception
{
	string _msg;
public:
	Exception(const string& msg) : _msg(msg) {}

	virtual const char* what() const noexcept override
	{
		return _msg.c_str();
	}
};*/