#pragma once
#include "Challenge.h"
#include <iostream>
#include "Eingabe.h"

extern ref class Challenge;

ref class Nutzerprofil {
private:
	static System::String^ uid;
	static System::String^ username;
	static System::String^ password;
	static System::String^ firstname;
	static System::String^ lastname;
	static int gewicht;
	static int groesse;
	static System::String^ geschlecht;
	static System::String^ ziel;
	static System::String^ bewegungsgruppe;
	static int geburtsdatum;
	static int alter;
	static System::String^ wasserstatus;
	static System::String^ kalorienstatus;
	static System::String^ sportstatus;
	static System::Collections::Generic::List<Challenge^>^ challenges = gcnew System::Collections::Generic::List<Challenge^>();
	static double wasserempfehlung;
	static double kalorienempfehlung;

public:
	void addChallenge(Challenge^ c);

	System::String^ getWasserstatus();
	System::String^ getKalorienstatus();
	System::String^ getSportstatus();

	void wasserstatusAktualisieren();
	void kalorienstatusAktualisieren();
	void sportstatusAktualisieren();

	double getWasserempfehlung();
	double getKalorienempfehlung();

	void wasserEmpfehlungAktualisieren();
	void kalorienEmpfehlungAktualisieren();


	System::String^ getUid();
	void setUid(std::string newUid);

	System::String^ getUsername();
	void setUsername(std::string newUsername);

	System::String^ getPassword();
	void setPassword(std::string newPassword);

	System::String^ getFirstname();
	void setFirstname(std::string newFirstname);

	System::String^ getLastname();
	void setLastname(std::string newLastname);

	int getGewicht();
	void setGewicht(std::string newGewicht);

	int getGroesse();
	void setGroesse(std::string newGroesse);

	System::String^ getGeschlecht();
	void setGeschlecht(std::string newGeschlecht);

	System::String^ getZiel();
	void setZiel(std::string newZiel);

	System::String^ getBewegungsgruppe();
	void setBewegungsgruppe(std::string newBewegungsgruppe);

	int getAlter();
	void setAlter(std::string datum);

	void setGeburtsdatum(std::string newGeburtsdatum);

	System::Collections::Generic::List<Challenge^>^ getCallenges();
};
