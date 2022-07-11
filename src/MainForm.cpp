#include "MainForm.h"
#include "LoginForm.h"
#include "Challenge.h"
#include "Hilfsfunktionen.h"
#include "DashboardForm.h"
#include "EingabeForm.h"
#include "ChallengeForm.h"
#include "ChartForm.h"
#include "UebungsplanForm.h"
#include "SettingsForm.h"

using namespace Loginsystem;

//Showing Dashboard
System::Void MainForm::BtnDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Text = "Dashboard";
	this->PnlFormLoader->Controls->Clear();
	DashboardForm^ FrmDashboard_Vrb = gcnew DashboardForm();
	FrmDashboard_Vrb->Dock = System::Windows::Forms::DockStyle::Fill;
	FrmDashboard_Vrb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	FrmDashboard_Vrb->TopLevel = false;
	FrmDashboard_Vrb->Button_Aktualisieren_Click(nullptr, nullptr);
	this->PnlFormLoader->Controls->Add(FrmDashboard_Vrb);
	FrmDashboard_Vrb->Visible = true;
} 

//Showing Eingabe
System::Void MainForm::btnEingabe_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Text = "Eingabe";
	this->PnlFormLoader->Controls->Clear();
	EingabeForm^ FrmEingabe_Vrb = gcnew EingabeForm();
	FrmEingabe_Vrb->Dock = System::Windows::Forms::DockStyle::Fill;
	FrmEingabe_Vrb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	FrmEingabe_Vrb->TopLevel = false;
	FrmEingabe_Vrb->Button_Aktualisieren_Click(nullptr, nullptr);
	this->PnlFormLoader->Controls->Add(FrmEingabe_Vrb);
	FrmEingabe_Vrb->Visible = true;
}

//Showing Challenges
System::Void MainForm::btnChallenges_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Text = "Challenges";
	this->PnlFormLoader->Controls->Clear();
	ChallengeForm^ FrmChallenge_Vrb = gcnew ChallengeForm();
	FrmChallenge_Vrb->Dock = System::Windows::Forms::DockStyle::Fill;
	FrmChallenge_Vrb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	FrmChallenge_Vrb->TopLevel = false;
	FrmChallenge_Vrb->Button_Aktualisieren_Click(nullptr, nullptr);
	this->PnlFormLoader->Controls->Add(FrmChallenge_Vrb);
	FrmChallenge_Vrb->Visible = true;
}

//Showing course
System::Void MainForm::btnVerlauf_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Text = "Verlauf";
	this->PnlFormLoader->Controls->Clear();
	ChartForm^ FrmChart_Vrb = gcnew ChartForm();
	FrmChart_Vrb->Dock = System::Windows::Forms::DockStyle::Fill;
	FrmChart_Vrb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	FrmChart_Vrb->TopLevel = false;
	this->PnlFormLoader->Controls->Add(FrmChart_Vrb);
	FrmChart_Vrb->Visible = true;
}

//Showing exercises
System::Void MainForm::btnUebung_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Text = "Dein Übungsplan";
	this->PnlFormLoader->Controls->Clear();
	UebungsplanForm^ FrmUebung_Vrb = gcnew UebungsplanForm();
	FrmUebung_Vrb->Dock = System::Windows::Forms::DockStyle::Fill;
	FrmUebung_Vrb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	FrmUebung_Vrb->TopLevel = false;
	this->PnlFormLoader->Controls->Add(FrmUebung_Vrb);
	FrmUebung_Vrb->Visible = true;
}

//Showing settings
System::Void MainForm::btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Text = "Einstellungen";
	this->PnlFormLoader->Controls->Clear();
	SettingsForm^ FrmSettings_Vrb = gcnew SettingsForm();
	FrmSettings_Vrb->Dock = System::Windows::Forms::DockStyle::Fill;
	FrmSettings_Vrb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	FrmSettings_Vrb->TopLevel = false;
	FrmSettings_Vrb->aktualisieren();
	this->PnlFormLoader->Controls->Add(FrmSettings_Vrb);
	FrmSettings_Vrb->Visible = true;
}

System::Void MainForm::btnAbmelden_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ login = gcnew LoginForm();
	this->Hide();
	login->ShowDialog();
}


