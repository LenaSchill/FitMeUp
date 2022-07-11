#include "Uebungsplan.h"
#include "Nutzerprofil.h"
#include <string>

Uebungsplan::Uebungsplan() {
	db.ConnectionFunction();
}

System::Collections::Generic::List<Uebung^>^ Uebungsplan::getUebungen() {
	return uebungen;
}

void Uebungsplan::uebungsplanGenerieren() {
	Nutzerprofil^ profil = gcnew Nutzerprofil();

	//differentiation by goal
	std::string met;
	float zusatz{ 0 };
	if (profil->getZiel() == "abnehmen") {
		met = "MET > 5";
		zusatz = 1;
	}
	else if (profil->getZiel() == "Muskelaufbau") {
		met = "MET > 5";
		zusatz = 1.3;
	}
	else {
		met = "MET <= 5";
		zusatz = 0.8;
	}

	uebungen->Clear();
	//Searching for suitable exerxises
	std::string query = "SELECT Beschreibung, Dauer from uebungen WHERE " + met + "; ";
	const char* q = query.c_str();
	db.qstate = mysql_query(db.conn, q);
	db.res = mysql_store_result(db.conn);

	if (!db.qstate) {
		while (db.row = mysql_fetch_row(db.res)) {
			if (db.row[0] != NULL && db.row[1] != NULL) {
				Uebung^ ue = gcnew Uebung();

				std::string beschreibungSTD = db.row[0];
				System::String^ beschreibung = gcnew System::String(beschreibungSTD.c_str());
				ue->setBeschreibung(beschreibung);

				float dauerFLOAT = std::stof(db.row[1]) * zusatz;

				System::String^ dauer = dauerFLOAT.ToString();
				ue->setDauer(dauer);

				//add in list
				uebungen->Add(ue);
			}
		}
	}
}