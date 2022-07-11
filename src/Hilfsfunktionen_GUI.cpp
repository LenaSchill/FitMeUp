#include "Hilfsfunktionen_GUI.h"
#include "Hilfsfunktionen.h"
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <vector>

///<summery>
///ausgelagerte Funktion für das Auslesen von TextBoxen (da in allen Forms gebraucht)
///</summery>


std::string textBoxAuslesen(::System::Windows::Forms::TextBox^ box) {
	System::String^ text = box->Text;
	std::string textSTD = msclr::interop::marshal_as<std::string>(text);
	return textSTD;
}

//readout the birthday an checks if it is plausible
std::string datumAuslesen(::System::Windows::Forms::MaskedTextBox^ box) {
	System::String^ text = box->Text;
	std::string textSTD = msclr::interop::marshal_as<std::string>(text);

	bool plausibel = true;

	int j = (textSTD[0] - 48) * 1000 + (textSTD[1] - 48) * 100 + (textSTD[2] - 48) * 10 + (textSTD[3] - 48);
	int m = (textSTD[5] - 48) * 10 + (textSTD[6] - 48);

	int d = (textSTD[6] - 48) * 10 + (textSTD[7] - 48);

	int aktDate = getDate();
	int jAkt = aktDate / 10000;
	int mAkt = (aktDate - (jAkt * 10000)) / 100;
	int dAkt = (aktDate - (jAkt * 10000 + mAkt * 100));

	if ((j <= (jAkt - 150)) || j >= (jAkt - 5)) {
		plausibel = false;
	}
	if ((m < 1) || (m > 12)) {
		plausibel = false;
	}
	if ((d < 1) || (d > 31)) {
		plausibel = false;
	}

	if (plausibel == true) {
		return textSTD;
	}
}

int NumericUpDownAuslesen(::System::Windows::Forms::NumericUpDown^ numeric) {
	System::Decimal num = numeric->Value;
	int numSTD = (int)num;
	return numSTD;
}

bool radioButtonAuslesen(::System::Windows::Forms::RadioButton^ radio) {
	bool checked = radio->Checked;
	return checked;
}

bool isEmpty(array<::System::Windows::Forms::TextBox^>^ boxen, int size) {
	for (int i = 0; i < size; i++) {
		if (boxen[i]->Text == "") {
			return true;
		}
	}
	return false;
}

std::string comboBoxAuslesen(::System::Windows::Forms::ComboBox^ combo) {
	System::String^ text = combo->Text;
	std::string textSTD = msclr::interop::marshal_as<std::string>(text);
	return textSTD;
}