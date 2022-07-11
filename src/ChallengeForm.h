#pragma once
#include "Challenge.h"
#include "Nutzerprofil.h"

namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für ChallengeForm
	/// </summary>
	public ref class ChallengeForm : public System::Windows::Forms::Form
	{
	public:
		ChallengeForm(void)
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
		~ChallengeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ Button_checkedBestaetigen;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox_VorgeschlageneChallenges;
	private: System::Windows::Forms::Label^ Label_VorschlagChallenges;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::CheckedListBox^ CheckedListBox1_AktuelleChallenges;
	private: System::Windows::Forms::Label^ Label_AktiveChallenges;
	private: System::Windows::Forms::Button^ Button_ChallengeBestaetigen;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Challenge^ c = gcnew Challenge();
		 System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Label_Hinweis;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ ListBox_abgeschlossen;


		   Nutzerprofil^ profil = gcnew Nutzerprofil();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Button_checkedBestaetigen = (gcnew System::Windows::Forms::Button());
			this->checkedListBox_VorgeschlageneChallenges = (gcnew System::Windows::Forms::CheckedListBox());
			this->Label_VorschlagChallenges = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->CheckedListBox1_AktuelleChallenges = (gcnew System::Windows::Forms::CheckedListBox());
			this->Label_AktiveChallenges = (gcnew System::Windows::Forms::Label());
			this->Button_ChallengeBestaetigen = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ListBox_abgeschlossen = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Label_Hinweis = (gcnew System::Windows::Forms::Label());
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Button_checkedBestaetigen
			// 
			this->Button_checkedBestaetigen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Button_checkedBestaetigen->Location = System::Drawing::Point(976, 203);
			this->Button_checkedBestaetigen->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->Button_checkedBestaetigen->Name = L"Button_checkedBestaetigen";
			this->Button_checkedBestaetigen->Size = System::Drawing::Size(136, 39);
			this->Button_checkedBestaetigen->TabIndex = 124;
			this->Button_checkedBestaetigen->Text = L"Bestätigen";
			this->Button_checkedBestaetigen->UseVisualStyleBackColor = true;
			this->Button_checkedBestaetigen->Click += gcnew System::EventHandler(this, &ChallengeForm::Button_ChallengeBestaetigen_Click);
			// 
			// checkedListBox_VorgeschlageneChallenges
			// 
			this->checkedListBox_VorgeschlageneChallenges->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->checkedListBox_VorgeschlageneChallenges->FormattingEnabled = true;
			this->checkedListBox_VorgeschlageneChallenges->Location = System::Drawing::Point(28, 68);
			this->checkedListBox_VorgeschlageneChallenges->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->checkedListBox_VorgeschlageneChallenges->Name = L"checkedListBox_VorgeschlageneChallenges";
			this->checkedListBox_VorgeschlageneChallenges->Size = System::Drawing::Size(1084, 128);
			this->checkedListBox_VorgeschlageneChallenges->TabIndex = 123;
			// 
			// Label_VorschlagChallenges
			// 
			this->Label_VorschlagChallenges->AutoSize = true;
			this->Label_VorschlagChallenges->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold));
			this->Label_VorschlagChallenges->ForeColor = System::Drawing::Color::DimGray;
			this->Label_VorschlagChallenges->Location = System::Drawing::Point(21, 29);
			this->Label_VorschlagChallenges->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_VorschlagChallenges->Name = L"Label_VorschlagChallenges";
			this->Label_VorschlagChallenges->Size = System::Drawing::Size(412, 32);
			this->Label_VorschlagChallenges->TabIndex = 122;
			this->Label_VorschlagChallenges->Text = L"Vorgeschlagende Challenges:";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel5->Controls->Add(this->CheckedListBox1_AktuelleChallenges);
			this->panel5->Controls->Add(this->Label_AktiveChallenges);
			this->panel5->Controls->Add(this->Button_ChallengeBestaetigen);
			this->panel5->Location = System::Drawing::Point(16, 338);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1132, 241);
			this->panel5->TabIndex = 121;
			// 
			// CheckedListBox1_AktuelleChallenges
			// 
			this->CheckedListBox1_AktuelleChallenges->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->CheckedListBox1_AktuelleChallenges->FormattingEnabled = true;
			this->CheckedListBox1_AktuelleChallenges->Location = System::Drawing::Point(20, 54);
			this->CheckedListBox1_AktuelleChallenges->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->CheckedListBox1_AktuelleChallenges->Name = L"CheckedListBox1_AktuelleChallenges";
			this->CheckedListBox1_AktuelleChallenges->Size = System::Drawing::Size(1089, 128);
			this->CheckedListBox1_AktuelleChallenges->TabIndex = 102;
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
			// Button_ChallengeBestaetigen
			// 
			this->Button_ChallengeBestaetigen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Button_ChallengeBestaetigen->Location = System::Drawing::Point(976, 190);
			this->Button_ChallengeBestaetigen->Margin = System::Windows::Forms::Padding(4);
			this->Button_ChallengeBestaetigen->Name = L"Button_ChallengeBestaetigen";
			this->Button_ChallengeBestaetigen->Size = System::Drawing::Size(136, 39);
			this->Button_ChallengeBestaetigen->TabIndex = 21;
			this->Button_ChallengeBestaetigen->Text = L"Bestätigen";
			this->Button_ChallengeBestaetigen->UseVisualStyleBackColor = true;
			this->Button_ChallengeBestaetigen->Click += gcnew System::EventHandler(this, &ChallengeForm::Button_checkedBestaetigen_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->ListBox_abgeschlossen);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(16, 605);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1132, 239);
			this->panel2->TabIndex = 122;
			// 
			// ListBox_abgeschlossen
			// 
			this->ListBox_abgeschlossen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->ListBox_abgeschlossen->FormattingEnabled = true;
			this->ListBox_abgeschlossen->ItemHeight = 24;
			this->ListBox_abgeschlossen->Location = System::Drawing::Point(20, 71);
			this->ListBox_abgeschlossen->Name = L"ListBox_abgeschlossen";
			this->ListBox_abgeschlossen->Size = System::Drawing::Size(1092, 124);
			this->ListBox_abgeschlossen->TabIndex = 127;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(16, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(392, 32);
			this->label1->TabIndex = 101;
			this->label1->Text = L"Abgeschlossene Challenges:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->checkedListBox_VorgeschlageneChallenges);
			this->panel1->Controls->Add(this->Button_checkedBestaetigen);
			this->panel1->Controls->Add(this->Label_VorschlagChallenges);
			this->panel1->Location = System::Drawing::Point(16, 75);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1132, 250);
			this->panel1->TabIndex = 125;
			// 
			// Label_Hinweis
			// 
			this->Label_Hinweis->AutoSize = true;
			this->Label_Hinweis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Hinweis->ForeColor = System::Drawing::Color::Black;
			this->Label_Hinweis->Location = System::Drawing::Point(16, 2);
			this->Label_Hinweis->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Hinweis->Name = L"Label_Hinweis";
			this->Label_Hinweis->Size = System::Drawing::Size(1173, 50);
			this->Label_Hinweis->TabIndex = 126;
			this->Label_Hinweis->Text = L"Durch abhaken und betätigen der \"Bestätigen\"-Taste werden Ihre vorgeschlagenen Ch"
				L"allenges gespeichert.\r\nIhre angenommenen Challenges werden Ihnen unten angezeigt"
				L".";
			// 
			// ChallengeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 1079);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Label_Hinweis);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ChallengeForm";
			this->Text = L"ChallengeForm";
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
public:
		System::Void Button_Aktualisieren_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Button_ChallengeBestaetigen_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Button_checkedBestaetigen_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void challengeVorschlagen();
		System::Void challengesAnzeigen(CheckedListBox^ CheckedListBox1_AktuelleChallenges);
		void challengeCheck(CheckedListBox^ CheckedListBox1_AktuelleChallenges);
		void abgeschlosseAnzeigen();
#pragma endregion
};
}
