
#include "UebungsplanForm.h"
#include "Hilfsfunktionen.h"
#include <msclr\marshal_cppstd.h>

using namespace Loginsystem;

//Read the exercise plan
System::Void UebungsplanForm::Button_EingabeUebungsplan_Click(System::Object^ sender, System::EventArgs^ e) {
	int laenge = DataGridView_Uebungsplan->Rows->Count;
	float dauer;
	std::string dauerSTD;
	System::String^ beschreibung;
	std::string beschreibungSTD;
	std::string trainingsart;

	for (int i = 0; i < laenge; i++) {
		if ((bool)DataGridView_Uebungsplan->Rows[i]->Cells[0]->Value == true) {

			beschreibung = DataGridView_Uebungsplan->Rows[i]->Cells[1]->Value->ToString();
			beschreibungSTD = msclr::interop::marshal_as<std::string>(beschreibung);

			System::String^ da = DataGridView_Uebungsplan->Rows[i]->Cells[3]->Value->ToString();
			dauer = float::Parse(da) / 60;
			dauerSTD = std::to_string(dauer);

			training->werteEingeben(dauerSTD, profil->getUid(), beschreibungSTD);
		}

	}
	uebungsplanAnzeigen();
} 

System::Void UebungsplanForm::uebungsplanAnzeigen() {
	//clear
	DataGridView_Uebungsplan->Rows->Clear();
	//generate plan
	uebungsplan->uebungsplanGenerieren();

	std::string date = std::to_string(getDate());
	int laenge = uebungsplan->getUebungen()->Count;
	//Show
	for (int i = 0; i < laenge; i++) {
		std::string beschreibung = msclr::interop::marshal_as<std::string>(uebungsplan->getUebungen()[i]->getBeschreibung());
		int dauer = (float::Parse(uebungsplan->getUebungen()[i]->getDauer())) * 60;
		//int --> only whole seconds are displayed
		int restdauer = dauer - (training->getAktWert(date, "Dauer", beschreibung) * 60);
		if (restdauer < 0) {
			restdauer = 0;
		}
		else {
			DataGridView_Uebungsplan->Rows->Add(false, uebungsplan->getUebungen()[i]->getBeschreibung(), dauer.ToString(), restdauer.ToString());
		}
	}
	laenge = DataGridView_Uebungsplan->RowCount;
	for (int i = 0; i < laenge; i++) {
		System::String^ dauer = DataGridView_Uebungsplan->Rows[i]->Cells[3]->Value->ToString();
		int dauerInt = int::Parse(dauer);
		if (dauerInt == 0) {
			DataGridView_Uebungsplan->Rows[i]->Cells[0]->Value = true;
		}

	}	
}