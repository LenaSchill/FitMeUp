#include "DashboardForm.h"
#include "MainForm.h"
#include "Challenge.h"
#include "Hilfsfunktionen.h"
#include <string>
#include "ChallengeForm.h"
#include "EingabeForm.h"
#include "Challenge.h"

using namespace Loginsystem;

//Aktualisieren-Button-Click -> Recalculation of recommendations, challenges, etc.
System::Void DashboardForm::Button_Aktualisieren_Click(System::Object^ sender, System::EventArgs^ e) {
	empfehlungenAktualisieren();
	werteAktualisieren();
	c->challengeUeberpruefen();
	challengesAnzeigen();
}

//Challenge done --> foreach checked Challenge, the Input-Date will be changed
System::Void DashboardForm::Button_checkedBestaetigen_Click(System::Object^ sender, System::EventArgs^ e) {
	ChallengeForm^ cf = gcnew ChallengeForm();
	cf->challengeCheck(CheckedListBox1_AktuelleChallenges);

}


//Recalculation and issuance of recommendations
System::Void DashboardForm::empfehlungenAktualisieren() {
	profil->wasserEmpfehlungAktualisieren();
	Label_WasserempfehlungWert->Text = (profil->getWasserempfehlung()).ToString();
	profil->kalorienEmpfehlungAktualisieren();
	Label_KalorienempfehlungWert->Text = (profil->getKalorienempfehlung()).ToString();
}


//Get water value and calorie value and display
System::Void DashboardForm::werteAktualisieren() {
	EingabeForm^ e = gcnew EingabeForm();
	e->werteAktualisieren(Label_WassereingabeWert, Label_KalorieneingabeWert, Label_KalorienVerbWert, Label_TrainingsdauerWert);
}


//Viewing accepted Challenges
System::Void DashboardForm::challengesAnzeigen() {
	ChallengeForm^ cf = gcnew ChallengeForm();
	cf->challengesAnzeigen(CheckedListBox1_AktuelleChallenges);
}