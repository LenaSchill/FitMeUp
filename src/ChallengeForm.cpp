#include "ChallengeForm.h"
#include "Challenge.h"
#include "Nutzerprofil.h"
#include "Hilfsfunktionen.h"
#include "LogicLoginsystem.h"
#include "DashboardForm.h"


using namespace Loginsystem;

System::Void ChallengeForm::Button_Aktualisieren_Click(System::Object^ sender, System::EventArgs^ e) {
	profil->kalorienEmpfehlungAktualisieren();
	profil->wasserEmpfehlungAktualisieren();
	c->challengeUeberpruefen();													
	challengeVorschlagen();
	challengesAnzeigen(CheckedListBox1_AktuelleChallenges);
	abgeschlosseAnzeigen();
}

//Viewing Challenges
System::Void ChallengeForm::challengeVorschlagen() {
	checkedListBox_VorgeschlageneChallenges->Items->Clear();
	Generic::List<Challenge^>^ challenges = c->challengeGenerieren();
	int laenge = challenges->Count;
	for (int i = 0; i < laenge; i++) {
		if (challenges[i]->getBeschreibung() == "Es ist für dich gerade keine neue Challenge verfügbar") {
			checkedListBox_VorgeschlageneChallenges->Items->Add(challenges[i]->getBeschreibung());
		}
		else {
			checkedListBox_VorgeschlageneChallenges->Items->Add(challenges[i]->getBeschreibung() + "\t (" + challenges[i]->getDauer() + " Tage)");
		}
	}
}


//Viewing successfully completed challenges
void ChallengeForm::abgeschlosseAnzeigen() {
	ListBox_abgeschlossen->Items->Clear();
	Generic::List<String^>^ challenges = c->abgeschlosseneHolen();
	int laenge = challenges->Count;
	for (int i = 0; i < laenge; i++) {
		int anzahl = 1;
		for (int j = i + 1; j < laenge; j++) {
			if (challenges[i] == challenges[j]) {
				anzahl++;
				challenges->RemoveAt(j);
				laenge--;
			}
		}
		ListBox_abgeschlossen->Items->Add(challenges[i] + "\t (" + anzahl + "x)");

	}
}

//Viewing accepted Challenges
System::Void ChallengeForm::challengesAnzeigen(CheckedListBox^ CheckedListBox_AktuelleChallenges) {
	//clear
	CheckedListBox_AktuelleChallenges->Items->Clear();
	//Get and view all descriptions of the accepted challenges
	int date = getDate();
	int restdauer;
	int laenge = profil->getCallenges()->Count;
	for (int i = 0; i < laenge; i++) {
		restdauer = profil->getCallenges()[i]->getDauer();
		while (date != profil->getCallenges()[i]->getStartDate()) {
			restdauer--;
			date = getDayBefore(date);
		}
		CheckedListBox_AktuelleChallenges->Items->Add(profil->getCallenges()[i]->getBeschreibung() + "\t (noch " + restdauer.ToString() + " Tag(e))");
		if (profil->getCallenges()[i]->getLastDate() == getDate()) {
			CheckedListBox_AktuelleChallenges->SetItemChecked(i, true);
		}
	}
}


//ChallengeBestaetign-Klick --> Challenge is accepted by the user
System::Void ChallengeForm::Button_ChallengeBestaetigen_Click(System::Object^ sender, System::EventArgs^ e) {
	LogicLoginsystem^ login = gcnew LogicLoginsystem();
	System::String^ beschreibung;
	System::String^ time = (getDate()).ToString();

	//for each checked challenge, the challenge is saved in ChallengeAnnahme
	for (int n = checkedListBox_VorgeschlageneChallenges->Items->Count - 1; n >= 0; n--) {
		if (checkedListBox_VorgeschlageneChallenges->GetItemChecked(n) == true) {
			beschreibung = checkedListBox_VorgeschlageneChallenges->Items[n]->ToString();
			//-9
			array<System::String^>^ subs = gcnew array<System::String^>(2);
			subs = beschreibung->Split('\t');
			beschreibung = subs[0];
			if (beschreibung != "Es ist für dich gerade keine neue Challenge verfügbar") {
				checkedListBox_VorgeschlageneChallenges->Items->RemoveAt(n);
				c->challengeEintragen(beschreibung, profil->getUid(), time);
			}
		}
	}
	if (beschreibung != "Es ist für dich gerade keine neue Challenge verfügbar") {
		MessageBox::Show("Yeah! Auf gehts!");
	}
	Button_Aktualisieren_Click(nullptr, nullptr);

}

//Challenge done --> foreach checked Challenge, the Input-Date will be changed
System::Void ChallengeForm::Button_checkedBestaetigen_Click(System::Object^ sender, System::EventArgs^ e) {
	challengeCheck(CheckedListBox1_AktuelleChallenges);
}

void ChallengeForm::challengeCheck(CheckedListBox^ CheckedListBox1_AktuelleChallenges) {
	System::String^ uid = profil->getUid();
	int n{ 0 };
	for (n = 0; n < CheckedListBox1_AktuelleChallenges->Items->Count; n++) {
		if (CheckedListBox1_AktuelleChallenges->GetItemChecked(n) == true) {
			System::String^ cid = profil->getCallenges()[n]->getCid();
			c->datumUpdaten(cid, uid);
		}
	}
	if (n > 0) {
		MessageBox::Show("Mach weiter so!");
	}
}