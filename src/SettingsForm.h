#pragma once
#include "RegistrationForm.h"
#include "LogicLoginsystem.h"

namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ComboBox^ ComboBox_Bewegungsgruppe;
	private: System::Windows::Forms::Label^ Label_Bewegungsgruppe;
	private: System::Windows::Forms::ComboBox^ ComboBox_Ziel;
	private: System::Windows::Forms::Label^ Label_Ziel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Button_speichern;



	private: System::Windows::Forms::Label^ Label_Nachname;
	private: System::Windows::Forms::TextBox^ TextBox_Passwort;
	private: System::Windows::Forms::TextBox^ TextBox_Benutzername;
	private: System::Windows::Forms::Label^ Label_Passwort;
	private: System::Windows::Forms::Label^ Label_Benutzername;
	private: System::Windows::Forms::NumericUpDown^ NumericUpDown_Gewicht;
	private: System::Windows::Forms::Label^ Label_Gewicht;
	private: System::Windows::Forms::Label^ Label_Groesse;
	private: System::Windows::Forms::NumericUpDown^ NumericUpDown_Groesse;



	private: System::Windows::Forms::TextBox^ TextBox_Lastname;
	private: System::Windows::Forms::Label^ Label_Vorname;
	private: System::Windows::Forms::TextBox^ TextBox_Firstname;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox2;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox4;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox5;
	
	private: RegistrationForm^ regForm = gcnew RegistrationForm();
	private: LogicLoginsystem^ login = gcnew LogicLoginsystem();
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->ComboBox_Bewegungsgruppe = (gcnew System::Windows::Forms::ComboBox());
			this->Label_Bewegungsgruppe = (gcnew System::Windows::Forms::Label());
			this->ComboBox_Ziel = (gcnew System::Windows::Forms::ComboBox());
			this->Label_Ziel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Button_speichern = (gcnew System::Windows::Forms::Button());
			this->Label_Nachname = (gcnew System::Windows::Forms::Label());
			this->TextBox_Passwort = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Benutzername = (gcnew System::Windows::Forms::TextBox());
			this->Label_Passwort = (gcnew System::Windows::Forms::Label());
			this->Label_Benutzername = (gcnew System::Windows::Forms::Label());
			this->NumericUpDown_Gewicht = (gcnew System::Windows::Forms::NumericUpDown());
			this->Label_Gewicht = (gcnew System::Windows::Forms::Label());
			this->Label_Groesse = (gcnew System::Windows::Forms::Label());
			this->NumericUpDown_Groesse = (gcnew System::Windows::Forms::NumericUpDown());
			this->TextBox_Lastname = (gcnew System::Windows::Forms::TextBox());
			this->Label_Vorname = (gcnew System::Windows::Forms::Label());
			this->TextBox_Firstname = (gcnew System::Windows::Forms::TextBox());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Gewicht))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Groesse))->BeginInit();
			this->SuspendLayout();
			// 
			// ComboBox_Bewegungsgruppe
			// 
			this->ComboBox_Bewegungsgruppe->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBox_Bewegungsgruppe->FormattingEnabled = true;
			this->ComboBox_Bewegungsgruppe->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"sitzen", L"sitzen + gehen + stehen",
					L"gehen + stehen", L"stehen", L"koerperlich anstrengende Arbeit"
			});
			this->ComboBox_Bewegungsgruppe->Location = System::Drawing::Point(644, 478);
			this->ComboBox_Bewegungsgruppe->Margin = System::Windows::Forms::Padding(2);
			this->ComboBox_Bewegungsgruppe->Name = L"ComboBox_Bewegungsgruppe";
			this->ComboBox_Bewegungsgruppe->Size = System::Drawing::Size(406, 33);
			this->ComboBox_Bewegungsgruppe->TabIndex = 64;
			// 
			// Label_Bewegungsgruppe
			// 
			this->Label_Bewegungsgruppe->AutoSize = true;
			this->Label_Bewegungsgruppe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Bewegungsgruppe->Location = System::Drawing::Point(404, 479);
			this->Label_Bewegungsgruppe->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Bewegungsgruppe->Name = L"Label_Bewegungsgruppe";
			this->Label_Bewegungsgruppe->Size = System::Drawing::Size(217, 25);
			this->Label_Bewegungsgruppe->TabIndex = 63;
			this->Label_Bewegungsgruppe->Text = L"Bewegungsgruppe";
			// 
			// ComboBox_Ziel
			// 
			this->ComboBox_Ziel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBox_Ziel->FormattingEnabled = true;
			this->ComboBox_Ziel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"abnehmen", L"Muskelaufbau", L"Fitness verbessern" });
			this->ComboBox_Ziel->Location = System::Drawing::Point(644, 424);
			this->ComboBox_Ziel->Margin = System::Windows::Forms::Padding(2);
			this->ComboBox_Ziel->Name = L"ComboBox_Ziel";
			this->ComboBox_Ziel->Size = System::Drawing::Size(406, 33);
			this->ComboBox_Ziel->TabIndex = 62;
			// 
			// Label_Ziel
			// 
			this->Label_Ziel->AutoSize = true;
			this->Label_Ziel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Ziel->Location = System::Drawing::Point(404, 424);
			this->Label_Ziel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Ziel->Name = L"Label_Ziel";
			this->Label_Ziel->Size = System::Drawing::Size(47, 25);
			this->Label_Ziel->TabIndex = 61;
			this->Label_Ziel->Text = L"Ziel";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->Button_speichern);
			this->panel1->Location = System::Drawing::Point(425, 734);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(628, 58);
			this->panel1->TabIndex = 60;
			// 
			// Button_speichern
			// 
			this->Button_speichern->BackColor = System::Drawing::Color::Transparent;
			this->Button_speichern->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_speichern->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_speichern->ForeColor = System::Drawing::Color::White;
			this->Button_speichern->Location = System::Drawing::Point(0, 2);
			this->Button_speichern->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Button_speichern->Name = L"Button_speichern";
			this->Button_speichern->Size = System::Drawing::Size(628, 58);
			this->Button_speichern->TabIndex = 22;
			this->Button_speichern->Text = L"speichern";
			this->Button_speichern->UseVisualStyleBackColor = false;
			this->Button_speichern->Click += gcnew System::EventHandler(this, &SettingsForm::Button_speichern_Click);
			// 
			// Label_Nachname
			// 
			this->Label_Nachname->AutoSize = true;
			this->Label_Nachname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Nachname->Location = System::Drawing::Point(404, 198);
			this->Label_Nachname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Nachname->Name = L"Label_Nachname";
			this->Label_Nachname->Size = System::Drawing::Size(134, 25);
			this->Label_Nachname->TabIndex = 38;
			this->Label_Nachname->Text = L"Nachname";
			// 
			// TextBox_Passwort
			// 
			this->TextBox_Passwort->BackColor = System::Drawing::Color::White;
			this->TextBox_Passwort->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Passwort->Location = System::Drawing::Point(601, 619);
			this->TextBox_Passwort->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Passwort->Name = L"TextBox_Passwort";
			this->TextBox_Passwort->PasswordChar = '*';
			this->TextBox_Passwort->Size = System::Drawing::Size(438, 24);
			this->TextBox_Passwort->TabIndex = 52;
			// 
			// TextBox_Benutzername
			// 
			this->TextBox_Benutzername->BackColor = System::Drawing::Color::White;
			this->TextBox_Benutzername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Benutzername->Location = System::Drawing::Point(586, 563);
			this->TextBox_Benutzername->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Benutzername->Name = L"TextBox_Benutzername";
			this->TextBox_Benutzername->Size = System::Drawing::Size(438, 24);
			this->TextBox_Benutzername->TabIndex = 51;
			// 
			// Label_Passwort
			// 
			this->Label_Passwort->AutoSize = true;
			this->Label_Passwort->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Passwort->Location = System::Drawing::Point(404, 608);
			this->Label_Passwort->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Passwort->Name = L"Label_Passwort";
			this->Label_Passwort->Size = System::Drawing::Size(107, 25);
			this->Label_Passwort->TabIndex = 50;
			this->Label_Passwort->Text = L"Passwort";
			// 
			// Label_Benutzername
			// 
			this->Label_Benutzername->AutoSize = true;
			this->Label_Benutzername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Benutzername->Location = System::Drawing::Point(404, 539);
			this->Label_Benutzername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Benutzername->Name = L"Label_Benutzername";
			this->Label_Benutzername->Size = System::Drawing::Size(167, 25);
			this->Label_Benutzername->TabIndex = 49;
			this->Label_Benutzername->Text = L"Benutzername";
			// 
			// NumericUpDown_Gewicht
			// 
			this->NumericUpDown_Gewicht->Location = System::Drawing::Point(600, 346);
			this->NumericUpDown_Gewicht->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->NumericUpDown_Gewicht->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->NumericUpDown_Gewicht->Name = L"NumericUpDown_Gewicht";
			this->NumericUpDown_Gewicht->Size = System::Drawing::Size(128, 31);
			this->NumericUpDown_Gewicht->TabIndex = 48;
			// 
			// Label_Gewicht
			// 
			this->Label_Gewicht->AutoSize = true;
			this->Label_Gewicht->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Gewicht->Location = System::Drawing::Point(404, 346);
			this->Label_Gewicht->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Gewicht->Name = L"Label_Gewicht";
			this->Label_Gewicht->Size = System::Drawing::Size(159, 25);
			this->Label_Gewicht->TabIndex = 47;
			this->Label_Gewicht->Text = L"Gewicht in kg";
			// 
			// Label_Groesse
			// 
			this->Label_Groesse->AutoSize = true;
			this->Label_Groesse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Groesse->Location = System::Drawing::Point(404, 279);
			this->Label_Groesse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Groesse->Name = L"Label_Groesse";
			this->Label_Groesse->Size = System::Drawing::Size(143, 25);
			this->Label_Groesse->TabIndex = 46;
			this->Label_Groesse->Text = L"Größe in cm";
			// 
			// NumericUpDown_Groesse
			// 
			this->NumericUpDown_Groesse->Location = System::Drawing::Point(600, 279);
			this->NumericUpDown_Groesse->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->NumericUpDown_Groesse->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250, 0, 0, 0 });
			this->NumericUpDown_Groesse->Name = L"NumericUpDown_Groesse";
			this->NumericUpDown_Groesse->Size = System::Drawing::Size(128, 31);
			this->NumericUpDown_Groesse->TabIndex = 45;
			// 
			// TextBox_Lastname
			// 
			this->TextBox_Lastname->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->TextBox_Lastname->BackColor = System::Drawing::Color::White;
			this->TextBox_Lastname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Lastname->Location = System::Drawing::Point(568, 221);
			this->TextBox_Lastname->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Lastname->Name = L"TextBox_Lastname";
			this->TextBox_Lastname->Size = System::Drawing::Size(438, 24);
			this->TextBox_Lastname->TabIndex = 41;
			// 
			// Label_Vorname
			// 
			this->Label_Vorname->AutoSize = true;
			this->Label_Vorname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Vorname->Location = System::Drawing::Point(404, 135);
			this->Label_Vorname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Vorname->Name = L"Label_Vorname";
			this->Label_Vorname->Size = System::Drawing::Size(114, 25);
			this->Label_Vorname->TabIndex = 40;
			this->Label_Vorname->Text = L"Vorname";
			// 
			// TextBox_Firstname
			// 
			this->TextBox_Firstname->BackColor = System::Drawing::Color::White;
			this->TextBox_Firstname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Firstname->Location = System::Drawing::Point(568, 162);
			this->TextBox_Firstname->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Firstname->Name = L"TextBox_Firstname";
			this->TextBox_Firstname->Size = System::Drawing::Size(438, 24);
			this->TextBox_Firstname->TabIndex = 39;
			// 
			// bunifuMaterialTextbox1
			// 
			this->bunifuMaterialTextbox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox1->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox1->Enabled = false;
			this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox1->HintText = L"";
			this->bunifuMaterialTextbox1->isPassword = false;
			this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->LineThickness = 1;
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(571, 124);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox1->MaxLength = 32767;
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox1->TabIndex = 55;
			this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox2
			// 
			this->bunifuMaterialTextbox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox2->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox2->Enabled = false;
			this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox2->HintText = L"";
			this->bunifuMaterialTextbox2->isPassword = false;
			this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->LineThickness = 1;
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(568, 175);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox2->MaxLength = 32767;
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox2->TabIndex = 56;
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox4
			// 
			this->bunifuMaterialTextbox4->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox4->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox4->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox4->Enabled = false;
			this->bunifuMaterialTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox4->ForeColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox4->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox4->HintText = L"";
			this->bunifuMaterialTextbox4->isPassword = false;
			this->bunifuMaterialTextbox4->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox4->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox4->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox4->LineThickness = 1;
			this->bunifuMaterialTextbox4->Location = System::Drawing::Point(600, 518);
			this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox4->MaxLength = 32767;
			this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
			this->bunifuMaterialTextbox4->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox4->TabIndex = 58;
			this->bunifuMaterialTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox5
			// 
			this->bunifuMaterialTextbox5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox5->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox5->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox5->Enabled = false;
			this->bunifuMaterialTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox5->ForeColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox5->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox5->HintText = L"";
			this->bunifuMaterialTextbox5->isPassword = false;
			this->bunifuMaterialTextbox5->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox5->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox5->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox5->LineThickness = 1;
			this->bunifuMaterialTextbox5->Location = System::Drawing::Point(600, 578);
			this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox5->MaxLength = 32767;
			this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
			this->bunifuMaterialTextbox5->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox5->TabIndex = 59;
			this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1404, 894);
			this->Controls->Add(this->ComboBox_Bewegungsgruppe);
			this->Controls->Add(this->Label_Bewegungsgruppe);
			this->Controls->Add(this->ComboBox_Ziel);
			this->Controls->Add(this->Label_Ziel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Label_Nachname);
			this->Controls->Add(this->TextBox_Passwort);
			this->Controls->Add(this->TextBox_Benutzername);
			this->Controls->Add(this->Label_Passwort);
			this->Controls->Add(this->Label_Benutzername);
			this->Controls->Add(this->NumericUpDown_Gewicht);
			this->Controls->Add(this->Label_Gewicht);
			this->Controls->Add(this->Label_Groesse);
			this->Controls->Add(this->NumericUpDown_Groesse);
			this->Controls->Add(this->TextBox_Lastname);
			this->Controls->Add(this->Label_Vorname);
			this->Controls->Add(this->TextBox_Firstname);
			this->Controls->Add(this->bunifuMaterialTextbox1);
			this->Controls->Add(this->bunifuMaterialTextbox2);
			this->Controls->Add(this->bunifuMaterialTextbox4);
			this->Controls->Add(this->bunifuMaterialTextbox5);
			this->Name = L"SettingsForm";
			this->Text = L"SettingsForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Gewicht))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Groesse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void SettingsForm::Button_speichern_Click(System::Object^ sender, System::EventArgs^ e);
	   void aktualisieren();
};
}
