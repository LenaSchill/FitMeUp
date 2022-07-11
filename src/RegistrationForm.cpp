#include "RegistrationForm.h"
#include "LoginForm.h"
#include "Hilfsfunktionen_GUI.h"
#include <msclr\marshal_cppstd.h>

using namespace Loginsystem;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//regiter-Button
System::Void RegistrationForm::Button_register_Click(System::Object^ sender, System::EventArgs^ e) {
	//readout the input-fields
	std::string lastname = textBoxAuslesen(TextBox_Lastname);
	std::string firstname = textBoxAuslesen(TextBox_Firstname);
	std::string date = datumAuslesen(maskedTextBox_Birthday);
	int height = NumericUpDownAuslesen(NumericUpDown_Groesse);
	int weight = NumericUpDownAuslesen(NumericUpDown_Gewicht);
	bool genderW = radioButtonAuslesen(RadioButton_weiblich);
	bool genderM = radioButtonAuslesen(RadioButton_maennlich);
	std::string username = textBoxAuslesen(TextBox_Benutzername);
	std::string password = textBoxAuslesen(TextBox_Passwort);
	std::string ziel = comboBoxAuslesen(ComboBox_Ziel);
	std::string bewegungsgruppe = comboBoxAuslesen(ComboBox_Bewegungsgruppe);
	char gender;
	//gender must be converted in char for the database
	if (genderW == true) {
		gender = 'w';
	}
	else if (genderM == true) {
		gender = 'm';
	}
	else {
		gender = 'x';
	}

	//Checking for plausibility and if fields are empty
	if (firstname == "" || lastname == "" || username == "" || ziel == "" || bewegungsgruppe == "" || password == "" || height == 0 || weight == 0 || gender == 'x') {
		MessageBox::Show("Bitte füllen Sie alle Felder aus.");
	}
	else if (height < heightMin || weight < weightMin) {
		MessageBox::Show("Bitte geben Sie ein korrektes Gewicht und eine korrekte Größe an.");
	}
	else if (date == "ungueltig") {
		MessageBox::Show("Bitte geben Sie ein korrektes Datum ein.");

	}
	else if (username.size() <= 2) {
		MessageBox::Show("Benutzername ist zu kurz");
	}
	else if (login->strongness(password) == false) {
		MessageBox::Show("Passwort entspricht nicht unseren Anforderungen.");
	}
	//Checking if user already exists
	else if (login->userExists(username,"-1") == true) {
		MessageBox::Show("Benutzername existiert bereits.");
	}

	//Calling registr (LogicLoginsystem) -> Close the Registration-Form
	else {
		login->registr(lastname, firstname, date, height, weight, gender, ziel, bewegungsgruppe, username, password);
		MessageBox::Show("Registrierung war erfolgreich.");
		this->Close();
	}
}
