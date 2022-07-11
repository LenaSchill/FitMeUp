
#pragma once
#include "Eingabe.h"
#include "LogicLoginsystem.h"
#include "Nutzerprofil.h"


namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form {
	public:
		
		MainForm() {
			InitializeComponent();
		}

	protected:
		~MainForm() {
			if (components) {
				delete components;
			}
		}
	private:
		System::ComponentModel::Container ^components;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ BtnDashboard;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnVerlauf;
	private: System::Windows::Forms::Button^ btnUebung;
	private: System::Windows::Forms::Button^ btnChallenges;
	private: System::Windows::Forms::Button^ btnEingabe;
	private: System::Windows::Forms::Panel^ PnlFormLoader;

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAbmelden;

	private: System::Windows::Forms::Button^ btnEinstellungen;



	Challenge^ c = gcnew Challenge();
	
		  
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEinstellungen = (gcnew System::Windows::Forms::Button());
			this->btnAbmelden = (gcnew System::Windows::Forms::Button());
			this->btnVerlauf = (gcnew System::Windows::Forms::Button());
			this->btnUebung = (gcnew System::Windows::Forms::Button());
			this->btnChallenges = (gcnew System::Windows::Forms::Button());
			this->btnEingabe = (gcnew System::Windows::Forms::Button());
			this->BtnDashboard = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PnlFormLoader = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->PnlFormLoader->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->btnEinstellungen);
			this->panel1->Controls->Add(this->btnAbmelden);
			this->panel1->Controls->Add(this->btnVerlauf);
			this->panel1->Controls->Add(this->btnUebung);
			this->panel1->Controls->Add(this->btnChallenges);
			this->panel1->Controls->Add(this->btnEingabe);
			this->panel1->Controls->Add(this->BtnDashboard);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(238, 635);
			this->panel1->TabIndex = 34;
			// 
			// btnEinstellungen
			// 
			this->btnEinstellungen->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEinstellungen->FlatAppearance->BorderSize = 0;
			this->btnEinstellungen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEinstellungen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEinstellungen->ForeColor = System::Drawing::Color::White;
			this->btnEinstellungen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEinstellungen.Image")));
			this->btnEinstellungen->Location = System::Drawing::Point(0, 446);
			this->btnEinstellungen->Name = L"btnEinstellungen";
			this->btnEinstellungen->Size = System::Drawing::Size(238, 68);
			this->btnEinstellungen->TabIndex = 3;
			this->btnEinstellungen->Text = L"Einstellungen";
			this->btnEinstellungen->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnEinstellungen->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnEinstellungen->UseVisualStyleBackColor = true;
			this->btnEinstellungen->Click += gcnew System::EventHandler(this, &MainForm::btnSettings_Click);
			// 
			// btnAbmelden
			// 
			this->btnAbmelden->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnAbmelden->FlatAppearance->BorderSize = 0;
			this->btnAbmelden->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbmelden->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbmelden->ForeColor = System::Drawing::Color::White;
			this->btnAbmelden->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAbmelden.Image")));
			this->btnAbmelden->Location = System::Drawing::Point(0, 567);
			this->btnAbmelden->Name = L"btnAbmelden";
			this->btnAbmelden->Size = System::Drawing::Size(238, 68);
			this->btnAbmelden->TabIndex = 2;
			this->btnAbmelden->Text = L"Abmelden   ";
			this->btnAbmelden->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAbmelden->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnAbmelden->UseVisualStyleBackColor = true;
			this->btnAbmelden->Click += gcnew System::EventHandler(this, &MainForm::btnAbmelden_Click);
			// 
			// btnVerlauf
			// 
			this->btnVerlauf->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnVerlauf->FlatAppearance->BorderSize = 0;
			this->btnVerlauf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVerlauf->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerlauf->ForeColor = System::Drawing::Color::White;
			this->btnVerlauf->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVerlauf.Image")));
			this->btnVerlauf->Location = System::Drawing::Point(0, 378);
			this->btnVerlauf->Name = L"btnVerlauf";
			this->btnVerlauf->Size = System::Drawing::Size(238, 68);
			this->btnVerlauf->TabIndex = 1;
			this->btnVerlauf->Text = L"Verlauf       ";
			this->btnVerlauf->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnVerlauf->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnVerlauf->UseVisualStyleBackColor = true;
			this->btnVerlauf->Click += gcnew System::EventHandler(this, &MainForm::btnVerlauf_Click);
			// 
			// btnUebung
			// 
			this->btnUebung->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnUebung->FlatAppearance->BorderSize = 0;
			this->btnUebung->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUebung->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUebung->ForeColor = System::Drawing::Color::White;
			this->btnUebung->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUebung.Image")));
			this->btnUebung->Location = System::Drawing::Point(0, 310);
			this->btnUebung->Name = L"btnUebung";
			this->btnUebung->Size = System::Drawing::Size(238, 68);
			this->btnUebung->TabIndex = 1;
			this->btnUebung->Text = L"Übungsplan";
			this->btnUebung->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnUebung->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnUebung->UseVisualStyleBackColor = true;
			this->btnUebung->Click += gcnew System::EventHandler(this, &MainForm::btnUebung_Click);
			// 
			// btnChallenges
			// 
			this->btnChallenges->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnChallenges->FlatAppearance->BorderSize = 0;
			this->btnChallenges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChallenges->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChallenges->ForeColor = System::Drawing::Color::White;
			this->btnChallenges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnChallenges.Image")));
			this->btnChallenges->Location = System::Drawing::Point(0, 242);
			this->btnChallenges->Name = L"btnChallenges";
			this->btnChallenges->Size = System::Drawing::Size(238, 68);
			this->btnChallenges->TabIndex = 1;
			this->btnChallenges->Text = L"Challenges ";
			this->btnChallenges->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnChallenges->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnChallenges->UseVisualStyleBackColor = true;
			this->btnChallenges->Click += gcnew System::EventHandler(this, &MainForm::btnChallenges_Click);
			// 
			// btnEingabe
			// 
			this->btnEingabe->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEingabe->FlatAppearance->BorderSize = 0;
			this->btnEingabe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEingabe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEingabe->ForeColor = System::Drawing::Color::White;
			this->btnEingabe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEingabe.Image")));
			this->btnEingabe->Location = System::Drawing::Point(0, 174);
			this->btnEingabe->Name = L"btnEingabe";
			this->btnEingabe->Size = System::Drawing::Size(238, 68);
			this->btnEingabe->TabIndex = 1;
			this->btnEingabe->Text = L" Eingabe   ";
			this->btnEingabe->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnEingabe->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnEingabe->UseVisualStyleBackColor = true;
			this->btnEingabe->Click += gcnew System::EventHandler(this, &MainForm::btnEingabe_Click);
			// 
			// BtnDashboard
			// 
			this->BtnDashboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnDashboard->FlatAppearance->BorderSize = 0;
			this->BtnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnDashboard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDashboard->ForeColor = System::Drawing::Color::White;
			this->BtnDashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnDashboard.Image")));
			this->BtnDashboard->Location = System::Drawing::Point(0, 106);
			this->BtnDashboard->Name = L"BtnDashboard";
			this->BtnDashboard->Size = System::Drawing::Size(238, 68);
			this->BtnDashboard->TabIndex = 1;
			this->BtnDashboard->Text = L"Dashboard";
			this->BtnDashboard->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BtnDashboard->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->BtnDashboard->UseVisualStyleBackColor = true;
			this->BtnDashboard->Click += gcnew System::EventHandler(this, &MainForm::BtnDashboard_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(238, 106);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(63, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 59);
			this->label1->TabIndex = 1;
			this->label1->Text = L"FitMeUp!";
			// 
			// PnlFormLoader
			// 
			this->PnlFormLoader->Controls->Add(this->label2);
			this->PnlFormLoader->Location = System::Drawing::Point(238, 106);
			this->PnlFormLoader->Name = L"PnlFormLoader";
			this->PnlFormLoader->Size = System::Drawing::Size(683, 436);
			this->PnlFormLoader->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(120, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(903, 93);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Willkommen bei FitMeUp!";
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(275, 50);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(0, 45);
			this->lblTitle->TabIndex = 36;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(964, 635);
			this->Controls->Add(this->PnlFormLoader);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Location = System::Drawing::Point(423, 307);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FitMeUp!";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->PnlFormLoader->ResumeLayout(false);
			this->PnlFormLoader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
		//Action Methoden
		System::Void MainForm::BtnDashboard_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm::btnEingabe_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm::btnChallenges_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm::btnVerlauf_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm::btnUebung_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnAbmelden_Click(System::Object^ sender, System::EventArgs^ e);
};
}
