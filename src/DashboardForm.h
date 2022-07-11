#pragma once
#include "Nutzerprofil.h"
#include "Eingabe.h"

namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für DashboardForm
	/// </summary>
	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	public:
		DashboardForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~DashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
		   Nutzerprofil^ profil = gcnew Nutzerprofil();
		   Eingabe^ eingabe = gcnew Eingabe();
	protected:
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ Label_Empfehlungen;
	private: System::Windows::Forms::Label^ Label_Wasserempfehung;
	private: System::Windows::Forms::Label^ Label_WasserempfehlungWert;
	private: System::Windows::Forms::Label^ Label_Kalorienempfehlung;
	private: System::Windows::Forms::Label^ Label_KalorienempfehlungWert;
	private: System::Windows::Forms::Label^ Label_Controleingabe;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ Label_Eingabewerte;
	private: System::Windows::Forms::Label^ Label_Wasserwerte;
	private: System::Windows::Forms::Label^ Label_Kalorienwerte;
	private: System::Windows::Forms::Label^ Label_WassereingabeWert;
	private: System::Windows::Forms::Label^ Label_KalorieneingabeWert;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ Button_ChallengeBestaetigen;
	private: System::Windows::Forms::CheckedListBox^ CheckedListBox1_AktuelleChallenges;
	private: System::Windows::Forms::Label^ Label_AktiveChallenges;


	protected:

	protected:
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ Label_Hinweis;
	private: System::Windows::Forms::Label^ Label_verbrannteKalorien;
	private: System::Windows::Forms::Label^ Label_KalorienVerbWert;
	private: System::Windows::Forms::Label^ Label_Trainingsdauer;
	private: System::Windows::Forms::Label^ Label_TrainingsdauerWert;

#pragma region Windows Form Designer generated code
		Challenge^ c = gcnew Challenge();
		void InitializeComponent(void)
		{
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Label_Empfehlungen = (gcnew System::Windows::Forms::Label());
			this->Label_Wasserempfehung = (gcnew System::Windows::Forms::Label());
			this->Label_WasserempfehlungWert = (gcnew System::Windows::Forms::Label());
			this->Label_Kalorienempfehlung = (gcnew System::Windows::Forms::Label());
			this->Label_KalorienempfehlungWert = (gcnew System::Windows::Forms::Label());
			this->Label_Controleingabe = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Label_verbrannteKalorien = (gcnew System::Windows::Forms::Label());
			this->Label_KalorienVerbWert = (gcnew System::Windows::Forms::Label());
			this->Label_Trainingsdauer = (gcnew System::Windows::Forms::Label());
			this->Label_TrainingsdauerWert = (gcnew System::Windows::Forms::Label());
			this->Label_Eingabewerte = (gcnew System::Windows::Forms::Label());
			this->Label_Wasserwerte = (gcnew System::Windows::Forms::Label());
			this->Label_Kalorienwerte = (gcnew System::Windows::Forms::Label());
			this->Label_WassereingabeWert = (gcnew System::Windows::Forms::Label());
			this->Label_KalorieneingabeWert = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->CheckedListBox1_AktuelleChallenges = (gcnew System::Windows::Forms::CheckedListBox());
			this->Button_ChallengeBestaetigen = (gcnew System::Windows::Forms::Button());
			this->Label_AktiveChallenges = (gcnew System::Windows::Forms::Label());
			this->Label_Hinweis = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Controls->Add(this->Label_Empfehlungen);
			this->panel4->Controls->Add(this->Label_Wasserempfehung);
			this->panel4->Controls->Add(this->Label_WasserempfehlungWert);
			this->panel4->Controls->Add(this->Label_Kalorienempfehlung);
			this->panel4->Controls->Add(this->Label_KalorienempfehlungWert);
			this->panel4->Controls->Add(this->Label_Controleingabe);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->panel4->Location = System::Drawing::Point(41, 115);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(383, 181);
			this->panel4->TabIndex = 109;
			// 
			// Label_Empfehlungen
			// 
			this->Label_Empfehlungen->AutoSize = true;
			this->Label_Empfehlungen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Empfehlungen->ForeColor = System::Drawing::Color::DimGray;
			this->Label_Empfehlungen->Location = System::Drawing::Point(16, 14);
			this->Label_Empfehlungen->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Empfehlungen->Name = L"Label_Empfehlungen";
			this->Label_Empfehlungen->Size = System::Drawing::Size(292, 32);
			this->Label_Empfehlungen->TabIndex = 1;
			this->Label_Empfehlungen->Text = L"Deine Empfehlungen:";
			// 
			// Label_Wasserempfehung
			// 
			this->Label_Wasserempfehung->AutoSize = true;
			this->Label_Wasserempfehung->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Wasserempfehung->ForeColor = System::Drawing::Color::Black;
			this->Label_Wasserempfehung->Location = System::Drawing::Point(32, 71);
			this->Label_Wasserempfehung->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Wasserempfehung->Name = L"Label_Wasserempfehung";
			this->Label_Wasserempfehung->Size = System::Drawing::Size(124, 25);
			this->Label_Wasserempfehung->TabIndex = 2;
			this->Label_Wasserempfehung->Text = L"Wasser (l):";
			// 
			// Label_WasserempfehlungWert
			// 
			this->Label_WasserempfehlungWert->AutoSize = true;
			this->Label_WasserempfehlungWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_WasserempfehlungWert->ForeColor = System::Drawing::Color::Black;
			this->Label_WasserempfehlungWert->Location = System::Drawing::Point(260, 69);
			this->Label_WasserempfehlungWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_WasserempfehlungWert->Name = L"Label_WasserempfehlungWert";
			this->Label_WasserempfehlungWert->Size = System::Drawing::Size(0, 25);
			this->Label_WasserempfehlungWert->TabIndex = 3;
			// 
			// Label_Kalorienempfehlung
			// 
			this->Label_Kalorienempfehlung->AutoSize = true;
			this->Label_Kalorienempfehlung->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Kalorienempfehlung->ForeColor = System::Drawing::Color::Black;
			this->Label_Kalorienempfehlung->Location = System::Drawing::Point(32, 115);
			this->Label_Kalorienempfehlung->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Kalorienempfehlung->Name = L"Label_Kalorienempfehlung";
			this->Label_Kalorienempfehlung->Size = System::Drawing::Size(173, 25);
			this->Label_Kalorienempfehlung->TabIndex = 4;
			this->Label_Kalorienempfehlung->Text = L"Kalorien (kcal):";
			// 
			// Label_KalorienempfehlungWert
			// 
			this->Label_KalorienempfehlungWert->AutoSize = true;
			this->Label_KalorienempfehlungWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_KalorienempfehlungWert->ForeColor = System::Drawing::Color::Black;
			this->Label_KalorienempfehlungWert->Location = System::Drawing::Point(260, 111);
			this->Label_KalorienempfehlungWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_KalorienempfehlungWert->Name = L"Label_KalorienempfehlungWert";
			this->Label_KalorienempfehlungWert->Size = System::Drawing::Size(0, 25);
			this->Label_KalorienempfehlungWert->TabIndex = 5;
			// 
			// Label_Controleingabe
			// 
			this->Label_Controleingabe->AutoSize = true;
			this->Label_Controleingabe->ForeColor = System::Drawing::Color::Black;
			this->Label_Controleingabe->Location = System::Drawing::Point(316, 21);
			this->Label_Controleingabe->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Controleingabe->Name = L"Label_Controleingabe";
			this->Label_Controleingabe->Size = System::Drawing::Size(0, 25);
			this->Label_Controleingabe->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel3->Controls->Add(this->Label_verbrannteKalorien);
			this->panel3->Controls->Add(this->Label_KalorienVerbWert);
			this->panel3->Controls->Add(this->Label_Trainingsdauer);
			this->panel3->Controls->Add(this->Label_TrainingsdauerWert);
			this->panel3->Controls->Add(this->Label_Eingabewerte);
			this->panel3->Controls->Add(this->Label_Wasserwerte);
			this->panel3->Controls->Add(this->Label_Kalorienwerte);
			this->panel3->Controls->Add(this->Label_WassereingabeWert);
			this->panel3->Controls->Add(this->Label_KalorieneingabeWert);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->panel3->Location = System::Drawing::Point(449, 115);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(692, 181);
			this->panel3->TabIndex = 110;
			// 
			// Label_verbrannteKalorien
			// 
			this->Label_verbrannteKalorien->AutoSize = true;
			this->Label_verbrannteKalorien->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_verbrannteKalorien->ForeColor = System::Drawing::Color::Black;
			this->Label_verbrannteKalorien->Location = System::Drawing::Point(278, 106);
			this->Label_verbrannteKalorien->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_verbrannteKalorien->Name = L"Label_verbrannteKalorien";
			this->Label_verbrannteKalorien->Size = System::Drawing::Size(254, 30);
			this->Label_verbrannteKalorien->TabIndex = 18;
			this->Label_verbrannteKalorien->Text = L"verbrannte Kalorien:";
			// 
			// Label_KalorienVerbWert
			// 
			this->Label_KalorienVerbWert->AutoSize = true;
			this->Label_KalorienVerbWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_KalorienVerbWert->ForeColor = System::Drawing::Color::Black;
			this->Label_KalorienVerbWert->Location = System::Drawing::Point(586, 110);
			this->Label_KalorienVerbWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_KalorienVerbWert->Name = L"Label_KalorienVerbWert";
			this->Label_KalorienVerbWert->Size = System::Drawing::Size(0, 30);
			this->Label_KalorienVerbWert->TabIndex = 19;
			// 
			// Label_Trainingsdauer
			// 
			this->Label_Trainingsdauer->AutoSize = true;
			this->Label_Trainingsdauer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_Trainingsdauer->ForeColor = System::Drawing::Color::Black;
			this->Label_Trainingsdauer->Location = System::Drawing::Point(281, 64);
			this->Label_Trainingsdauer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Trainingsdauer->Name = L"Label_Trainingsdauer";
			this->Label_Trainingsdauer->Size = System::Drawing::Size(261, 30);
			this->Label_Trainingsdauer->TabIndex = 16;
			this->Label_Trainingsdauer->Text = L"Trainingsdauer (min):";
			// 
			// Label_TrainingsdauerWert
			// 
			this->Label_TrainingsdauerWert->AutoSize = true;
			this->Label_TrainingsdauerWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_TrainingsdauerWert->ForeColor = System::Drawing::Color::Black;
			this->Label_TrainingsdauerWert->Location = System::Drawing::Point(586, 64);
			this->Label_TrainingsdauerWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_TrainingsdauerWert->Name = L"Label_TrainingsdauerWert";
			this->Label_TrainingsdauerWert->Size = System::Drawing::Size(0, 30);
			this->Label_TrainingsdauerWert->TabIndex = 17;
			// 
			// Label_Eingabewerte
			// 
			this->Label_Eingabewerte->AutoSize = true;
			this->Label_Eingabewerte->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Eingabewerte->ForeColor = System::Drawing::Color::DimGray;
			this->Label_Eingabewerte->Location = System::Drawing::Point(13, 14);
			this->Label_Eingabewerte->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Eingabewerte->Name = L"Label_Eingabewerte";
			this->Label_Eingabewerte->Size = System::Drawing::Size(180, 32);
			this->Label_Eingabewerte->TabIndex = 7;
			this->Label_Eingabewerte->Text = L"Deine Werte:";
			// 
			// Label_Wasserwerte
			// 
			this->Label_Wasserwerte->AutoSize = true;
			this->Label_Wasserwerte->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Wasserwerte->ForeColor = System::Drawing::Color::Black;
			this->Label_Wasserwerte->Location = System::Drawing::Point(20, 71);
			this->Label_Wasserwerte->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Wasserwerte->Name = L"Label_Wasserwerte";
			this->Label_Wasserwerte->Size = System::Drawing::Size(124, 25);
			this->Label_Wasserwerte->TabIndex = 8;
			this->Label_Wasserwerte->Text = L"Wasser (l):";
			// 
			// Label_Kalorienwerte
			// 
			this->Label_Kalorienwerte->AutoSize = true;
			this->Label_Kalorienwerte->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Kalorienwerte->ForeColor = System::Drawing::Color::Black;
			this->Label_Kalorienwerte->Location = System::Drawing::Point(17, 111);
			this->Label_Kalorienwerte->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Kalorienwerte->Name = L"Label_Kalorienwerte";
			this->Label_Kalorienwerte->Size = System::Drawing::Size(173, 25);
			this->Label_Kalorienwerte->TabIndex = 9;
			this->Label_Kalorienwerte->Text = L"Kalorien (kcal):";
			// 
			// Label_WassereingabeWert
			// 
			this->Label_WassereingabeWert->AutoSize = true;
			this->Label_WassereingabeWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_WassereingabeWert->ForeColor = System::Drawing::Color::Black;
			this->Label_WassereingabeWert->Location = System::Drawing::Point(218, 73);
			this->Label_WassereingabeWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_WassereingabeWert->Name = L"Label_WassereingabeWert";
			this->Label_WassereingabeWert->Size = System::Drawing::Size(0, 25);
			this->Label_WassereingabeWert->TabIndex = 10;
			// 
			// Label_KalorieneingabeWert
			// 
			this->Label_KalorieneingabeWert->AutoSize = true;
			this->Label_KalorieneingabeWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_KalorieneingabeWert->ForeColor = System::Drawing::Color::Black;
			this->Label_KalorieneingabeWert->Location = System::Drawing::Point(218, 115);
			this->Label_KalorieneingabeWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_KalorieneingabeWert->Name = L"Label_KalorieneingabeWert";
			this->Label_KalorieneingabeWert->Size = System::Drawing::Size(0, 25);
			this->Label_KalorieneingabeWert->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel5->Controls->Add(this->CheckedListBox1_AktuelleChallenges);
			this->panel5->Controls->Add(this->Button_ChallengeBestaetigen);
			this->panel5->Controls->Add(this->Label_AktiveChallenges);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->panel5->Location = System::Drawing::Point(41, 315);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1100, 359);
			this->panel5->TabIndex = 112;
			// 
			// CheckedListBox1_AktuelleChallenges
			// 
			this->CheckedListBox1_AktuelleChallenges->FormattingEnabled = true;
			this->CheckedListBox1_AktuelleChallenges->Location = System::Drawing::Point(20, 71);
			this->CheckedListBox1_AktuelleChallenges->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->CheckedListBox1_AktuelleChallenges->Name = L"CheckedListBox1_AktuelleChallenges";
			this->CheckedListBox1_AktuelleChallenges->Size = System::Drawing::Size(1047, 159);
			this->CheckedListBox1_AktuelleChallenges->TabIndex = 102;
			// 
			// Button_ChallengeBestaetigen
			// 
			this->Button_ChallengeBestaetigen->ForeColor = System::Drawing::Color::Black;
			this->Button_ChallengeBestaetigen->Location = System::Drawing::Point(932, 285);
			this->Button_ChallengeBestaetigen->Margin = System::Windows::Forms::Padding(4);
			this->Button_ChallengeBestaetigen->Name = L"Button_ChallengeBestaetigen";
			this->Button_ChallengeBestaetigen->Size = System::Drawing::Size(136, 39);
			this->Button_ChallengeBestaetigen->TabIndex = 21;
			this->Button_ChallengeBestaetigen->Text = L"Bestätigen";
			this->Button_ChallengeBestaetigen->UseVisualStyleBackColor = true;
			this->Button_ChallengeBestaetigen->Click += gcnew System::EventHandler(this, &DashboardForm::Button_checkedBestaetigen_Click);
			// 
			// Label_AktiveChallenges
			// 
			this->Label_AktiveChallenges->AutoSize = true;
			this->Label_AktiveChallenges->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold));
			this->Label_AktiveChallenges->ForeColor = System::Drawing::Color::DimGray;
			this->Label_AktiveChallenges->Location = System::Drawing::Point(16, 21);
			this->Label_AktiveChallenges->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_AktiveChallenges->Name = L"Label_AktiveChallenges";
			this->Label_AktiveChallenges->Size = System::Drawing::Size(252, 32);
			this->Label_AktiveChallenges->TabIndex = 101;
			this->Label_AktiveChallenges->Text = L"Deine Challenges:";
			// 
			// Label_Hinweis
			// 
			this->Label_Hinweis->AutoSize = true;
			this->Label_Hinweis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Hinweis->ForeColor = System::Drawing::Color::Black;
			this->Label_Hinweis->Location = System::Drawing::Point(56, 42);
			this->Label_Hinweis->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Hinweis->Name = L"Label_Hinweis";
			this->Label_Hinweis->Size = System::Drawing::Size(1053, 50);
			this->Label_Hinweis->TabIndex = 113;
			this->Label_Hinweis->Text = L"Hier können Sie Ihre empfohlenen Werte, als auch Ihre aktuellen Werte einsehen.\r\n"
				L"Durch abhaken und betätigen der \"Bestätigen\"-Taste werden Ihre aktuellen Challen"
				L"ges bestätigt.";
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 764);
			this->Controls->Add(this->Label_Hinweis);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DashboardForm";
			this->Text = L"DashboardForm";
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Action Methoden
		public: System::Void Button_Aktualisieren_Click(System::Object^ sender, System::EventArgs^ e);
		private:
		System::Void Button_checkedBestaetigen_Click(System::Object^ sender, System::EventArgs^ e);

		//Hilfsmethoden
		System::Void empfehlungenAktualisieren();
		System::Void werteAktualisieren();
		System::Void challengesAnzeigen();
#pragma endregion
};
}
