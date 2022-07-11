#include "Nutzerprofil.h"
#include <msclr\marshal_cppstd.h>
#include "Hilfsfunktionen.h"

//Setter
void Nutzerprofil::setUid(std::string newUid) {
	uid = gcnew System::String(newUid.c_str());
}

void Nutzerprofil::setUsername(std::string newUsername) {
	username = gcnew System::String(newUsername.c_str());
}

void Nutzerprofil::setPassword(std::string newPassword) {
	password = gcnew System::String(newPassword.c_str());
}

void Nutzerprofil::setLastname(std::string newLastname) {
	lastname = gcnew System::String(newLastname.c_str());
}

void Nutzerprofil::setFirstname(std::string newFirstname) {
	firstname = gcnew System::String(newFirstname.c_str());
}

void Nutzerprofil::setGewicht(std::string newGewicht) {
	gewicht = atoi(newGewicht.c_str());
}

void Nutzerprofil::setGroesse(std::string newGroesse) {
	groesse = atoi(newGroesse.c_str());
}

void Nutzerprofil::setGeschlecht(std::string newGeschlecht) {
	geschlecht = gcnew System::String(newGeschlecht.c_str());
}

void Nutzerprofil::setZiel(std::string newZiel) {
	ziel = gcnew System::String(newZiel.c_str());
}

void Nutzerprofil::setBewegungsgruppe(std::string newBewegungsgruppe) {
	bewegungsgruppe = gcnew System::String(newBewegungsgruppe.c_str());
}
void Nutzerprofil::setGeburtsdatum(std::string newGeburtsdatum) {
	geburtsdatum = atoi(newGeburtsdatum.c_str());

	//alter berechnen
	int heute = getDate();
	int j1 = newGeburtsdatum[0] - 48;
	int j2 = newGeburtsdatum[1] - 48;
	int j3 = newGeburtsdatum[2] - 48;
	int j4 = newGeburtsdatum[3] - 48;
	int m1 = newGeburtsdatum[5] - 48;
	int m2 = newGeburtsdatum[6] - 48;
	int d1 = newGeburtsdatum[8] - 48;
	int d2 = newGeburtsdatum[9] - 48;
	int gDatum = j1 * 10000000 + j2 * 1000000 + j3 * 100000 + j4 * 10000 + m1 * 1000 + m2 * 100 + d1 * 10 + d2;
	alter = (heute - gDatum) / 10000;
}

void Nutzerprofil::setAlter(std::string newAlter) {
	alter = atoi(newAlter.c_str());
}


//Getter
System::String^ Nutzerprofil::getUid() {
	return uid;
}

System::String^ Nutzerprofil::getUsername() {
	return username;
}

System::String^ Nutzerprofil::getPassword() {
	return password;
}

System::String^ Nutzerprofil::getLastname() {
	return lastname;
}

System::String^ Nutzerprofil::getFirstname() {
	return firstname;
}

int Nutzerprofil::getGewicht() {
	return gewicht;
}

int Nutzerprofil::getGroesse() {
	return groesse;
}

System::String^ Nutzerprofil::getGeschlecht() {
	return  geschlecht;
}

System::String^ Nutzerprofil::getZiel() {
	return  ziel;
}

System::String^ Nutzerprofil::getBewegungsgruppe() {
	return  bewegungsgruppe;
}

int Nutzerprofil::getAlter() {
	return alter;
}

System::String^ Nutzerprofil::getWasserstatus() {
	return wasserstatus;
}

System::String^ Nutzerprofil::getKalorienstatus() {
	return kalorienstatus;
}

System::String^ Nutzerprofil::getSportstatus() {
	return sportstatus;
}

System::Collections::Generic::List<Challenge^>^ Nutzerprofil::getCallenges() {
	return challenges;

}

//Status Berechnen
void Nutzerprofil::wasserstatusAktualisieren() {
	Eingabe^ eingabe = gcnew Eingabe();
	std::string date = std::to_string(getDayBefore(getDate()));
	double bilanz = (getWasserempfehlung() * 1000) - eingabe->getAktWert("water", date);
	if (bilanz <= 200) {
		wasserstatus = "ausgeglichen";
	}
	else if (bilanz <= 400) {
		wasserstatus = "dehydriert";
	}
	else if (bilanz > 400) {
		wasserstatus = "starkDehydriert";
	}
	else {
		wasserstatus = "error";
	}
}

void Nutzerprofil::sportstatusAktualisieren() {
	Training^ eingabe = gcnew Training();
	std::string date = std::to_string(getDayBefore(getDate()));
	double dauer = eingabe->getAktWert(date, "Dauer", "all");
	if (dauer <= 5) {
		sportstatus = "sehrwenigSport";
	}
	else if (dauer <= 10) {
		sportstatus = "wenigSport";
	}
	else {
		sportstatus = "ausgeglichen";
	}
}

void Nutzerprofil::kalorienstatusAktualisieren() {
	Eingabe^ eingabe = gcnew Eingabe();
	std::string date = std::to_string(getDayBefore(getDate()));

	double bilanz = getKalorienempfehlung() - eingabe->getAktWert("calories", date);

	if (-300 <= bilanz && bilanz <= 300) {
		kalorienstatus = "ausgeglichen";
	}
	else if (300 < bilanz && bilanz <= 600) {
		kalorienstatus = "wenigKalorien";
	}
	else if (600 < bilanz) {
		kalorienstatus = "vielZuwenigKalorien";
	}
	else if (bilanz < -300) {
		kalorienstatus = "zuVielKalorien";
	}
	else {
		kalorienstatus = "error";
	}
}

void Nutzerprofil::wasserEmpfehlungAktualisieren() {
	double bedarf = ((getGewicht() * getAlter()) / 28.3) * 0.03;
	if (bewegungsgruppe == "stitzen") {
		bedarf = bedarf * 0.9;
	}
	else if (bewegungsgruppe == "gehen + stehen") {
		bedarf = bedarf * 1.1;
	}
	else if (bewegungsgruppe == "stehen") {
		bedarf = bedarf * 1.2;
	}
	else if (bewegungsgruppe == "sitzen + gehen + stehen") {
		bedarf = bedarf + 1.25;
	}
	else if (bewegungsgruppe == "koerperlich anstrengende Arbeit") {
		bedarf = bedarf + 1.5;
	}

	if (ziel == "abnehmen" || ziel == "Muskelaufbau") {
		bedarf = bedarf * 1.2;
	}
	wasserempfehlung = round(bedarf * 100 + .5) / 100.0;
	
}

double Nutzerprofil::getWasserempfehlung() {
	return wasserempfehlung;
}



void Nutzerprofil::kalorienEmpfehlungAktualisieren() {
	Training^ training = gcnew Training();
	double grundumsatz = 0;
	double pal = 0;

	if (getGeschlecht() == "w") {
		grundumsatz = 655.1 + (9.56 * getGewicht()) + (1.85 * getGroesse()) - (4.7 * getAlter());
	}
	else if (getGeschlecht() == "m") {
		grundumsatz = 66.5 + (13.75 * getGewicht()) + (5.0 * getGroesse()) - (6.76 * getAlter());
	}
	else {
		//error
		kalorienempfehlung = 0;
	}

	if (bewegungsgruppe == "sitzen") {
		pal = 1.2;
	}
	else if (bewegungsgruppe == "sitzen + gehen + stehen") {
		pal = 1.6;
	}
	else if (bewegungsgruppe == "gehen + stehen") {
		pal = 1.8;
	}
	else if (bewegungsgruppe == "stehen") {
		pal = 1.9;
	}
	else if (bewegungsgruppe == "koerperlich anstrengende Arbeit") {
		pal = 2;
	}
	double umsatz = grundumsatz * pal;

	if (ziel == "abnehmen") {
		umsatz -= 15 / 100;
	}
	else if (ziel == "Muskelaufbau") {
		umsatz += 15 / 100;
	}

	int verbrauchteKalorien = training->getAktWert(std::to_string(getDate()), "Kcal_Pro_Einheit", "all");
	umsatz += verbrauchteKalorien;
	kalorienempfehlung = round(umsatz * 100.0 + .5) / 100.0;
	
}


double Nutzerprofil::getKalorienempfehlung() {
	return kalorienempfehlung;
}

void Nutzerprofil::addChallenge(Challenge^ c) {
	challenges->Add(c);
}

















