#include "EingabeForm.h"
#include "MainForm.h"
#include "Eingabe.h"
#include "Hilfsfunktionen.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include "Hilfsfunktionen_GUI.h"
#include <math.h>

using namespace Loginsystem;

System::Void EingabeForm::Button_Aktualisieren_Click(System::Object^ sender, System::EventArgs^ e) {
	werteAktualisieren(Label_WassereingabeWert, Label_KalorieneingabeWert, Label_KalorienVerbWert, Label_TrainingsdauerWert);
}

//Get water value, calorie value and sport values and display
System::Void EingabeForm::werteAktualisieren(Label^ Label_WassereingabeWert, Label^ Label_KalorieneingabeWert, Label^ Label_KalorienVerbWert, Label^ Label_TrainingsdauerWert) {
	std::string date = std::to_string(getDate());
	double wasserwert = eingabe->getAktWert("water", date);
	Label_WassereingabeWert->Text = (wasserwert).ToString();
	int kalorienwert = eingabe->getAktWert("calories", date);
	Label_KalorieneingabeWert->Text = (kalorienwert).ToString();
	double trainingsdauer = training->getAktWert(date,"dauer","all");
	trainingsdauer = round(trainingsdauer * 100 + .5) / 100.0;
	double n;
	if (modf(trainingsdauer, &n) <= 0.2) {
		int training = trainingsdauer;
		trainingsdauer = training;
	}
	Label_TrainingsdauerWert->Text = (trainingsdauer).ToString();
	int verbrannteKalorien = training->getAktWert(date, "Kcal_Pro_Einheit", "all");
	Label_KalorienVerbWert->Text = (verbrannteKalorien).ToString();
}


//Eingabe-Button-Click --> Save the entered values (calories, water, sport)
System::Void EingabeForm::Button_Eingabe_Click(System::Object^ sender, System::EventArgs^ e) {
	//water
	std::string y = textBoxAuslesen(TextBox_Wassereingabe);
	if (atoi(y.c_str()) > 0) {
		eingabe->werteEingeben(y, profil->getUid(), "water");
	}

	//calories
	std::string x = textBoxAuslesen(TextBox_Kalorieneingabe);
	if (atoi(x.c_str()) > 0) {
		eingabe->werteEingeben(x, profil->getUid(), "calories");
	}
	//sport
	if (ComboBox_Trainingsart->SelectedItem != nullptr) {
		System::String^ trainingsart = ComboBox_Trainingsart->SelectedItem->ToString();
		std::string trainingsartSTD = msclr::interop::marshal_as<std::string>(trainingsart);
		if (!(TextBox_Trainingseinheit->Text == "")) {
			Training^ training = gcnew Training();
			std::string y = textBoxAuslesen(TextBox_Trainingseinheit);
			if (atoi(y.c_str()) > 0) {
				training->werteEingeben(y, profil->getUid(), trainingsartSTD);
			}
		}
	}
	TextBox_Wassereingabe->Text = "";
	TextBox_Kalorieneingabe->Text = "";
	TextBox_Trainingseinheit->Text = "";
	ComboBox_Trainingsart->Text == "";
	werteAktualisieren(Label_WassereingabeWert, Label_KalorieneingabeWert, Label_KalorienVerbWert, Label_TrainingsdauerWert);
}
