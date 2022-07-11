
#include "SettingsForm.h"
#include "Nutzerprofil.h"
#include "Hilfsfunktionen_GUI.h"

using namespace Loginsystem;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

void SettingsForm::aktualisieren() {
	Nutzerprofil^ profil = gcnew Nutzerprofil();
	TextBox_Lastname->Text = profil->getLastname();
	TextBox_Firstname->Text = profil->getFirstname();
	NumericUpDown_Groesse->Value = profil->getGroesse();
	NumericUpDown_Gewicht->Value = profil->getGewicht();
	TextBox_Benutzername->Text = profil->getUsername();
	TextBox_Passwort->Text = profil->getPassword();
	ComboBox_Ziel->Text = profil->getZiel();
	ComboBox_Bewegungsgruppe->Text = profil->getBewegungsgruppe();
}


System::Void SettingsForm::Button_speichern_Click(System::Object^ sender, System::EventArgs^ e) {
	Nutzerprofil^ profil = gcnew Nutzerprofil();

	//readout the input-fields
	std::string uid = msclr::interop::marshal_as<std::string>(profil->getUid());
	std::string lastname = textBoxAuslesen(TextBox_Lastname);
	std::string firstname = textBoxAuslesen(TextBox_Firstname);
	int height = NumericUpDownAuslesen(NumericUpDown_Groesse);
	int weight = NumericUpDownAuslesen(NumericUpDown_Gewicht);
	std::string username = textBoxAuslesen(TextBox_Benutzername);
	std::string password = textBoxAuslesen(TextBox_Passwort);
	std::string ziel = comboBoxAuslesen(ComboBox_Ziel);
	std::string bewegungsgruppe = comboBoxAuslesen(ComboBox_Bewegungsgruppe);

	//Checking for plausibility and if fields are empty
	if (firstname == "" || lastname == "" || username == "" || ziel == "" || bewegungsgruppe == "" || password == "" || height == 0 || weight == 0) {
		MessageBox::Show("Bitte füllen Sie alle Felder aus.");
	}
	else if (height < regForm->heightMin || weight < regForm->weightMin) {
		MessageBox::Show("Bitte geben Sie ein korrektes Gewicht und eine korrekte Größe an.");
	}
	else if (username.size() <= 2) {
		MessageBox::Show("Benutzername ist zu kurz");
	}
	else if (login->strongness(password) == false) {
		MessageBox::Show("Passwort entspricht nicht unseren Anforderungen.");
	}
	//Checking if user already exists
	else if (login->userExists(username,uid) == true) {
		MessageBox::Show("Benutzername existiert bereits.");
	}

	//Calling update (LogicLoginsystem) -> Close the Registration-Form
	else {
		login->update(lastname, firstname, height, weight, ziel, bewegungsgruppe, username, password);
		MessageBox::Show("Deine Daten wurden geändert.");
	}
}

