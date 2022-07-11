
#pragma once
#include "LogicLoginsystem.h"
#include "Hilfsfunktionen_GUI.h"
#include <msclr\marshal_cppstd.h>


namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class RegistrationForm : public System::Windows::Forms::Form {
	public:
		RegistrationForm(void) { InitializeComponent(); }

	protected:
		~RegistrationForm() {
			if (components)
			{
				delete components;
			}
		}

		private: System::Windows::Forms::Label^ Label_RegistrationTitle;
		private: System::Windows::Forms::TextBox^ TextBox_Firstname;
		private: System::Windows::Forms::Label^ Label_Nachname;
		private: System::Windows::Forms::TextBox^ TextBox_Lastname;
		private: System::Windows::Forms::Label^ Label_Vorname;
		private: System::Windows::Forms::Label^ Label_Geschlecht;
		private: System::Windows::Forms::RadioButton^ RadioButton_weiblich;
		private: System::Windows::Forms::Label^ Label_Geburtsdatum;
		private: System::Windows::Forms::NumericUpDown^ NumericUpDown_Groesse;
		private: System::Windows::Forms::Label^ Label_Groesse;
		private: System::Windows::Forms::Label^ Label_Gewicht;
		private: System::Windows::Forms::NumericUpDown^ NumericUpDown_Gewicht;
		private: System::Windows::Forms::Label^ Label_Benutzername;
		private: System::Windows::Forms::Label^ Label_Passwort;
		private: System::Windows::Forms::TextBox^ TextBox_Benutzername;
		private: System::Windows::Forms::TextBox^ TextBox_Passwort;
	private: System::Windows::Forms::Button^ Button_register;


		private: System::Windows::Forms::RadioButton^ RadioButton_maennlich;



	private:
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_Birthday;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox3;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox4;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ ComboBox_Bewegungsgruppe;
	private: System::Windows::Forms::Label^ Label_Bewegungsgruppe;
	private: System::Windows::Forms::ComboBox^ ComboBox_Ziel;
	private: System::Windows::Forms::Label^ Label_Ziel;
	private: System::Windows::Forms::Label^ label1;
	private: LogicLoginsystem^ login = gcnew LogicLoginsystem();
	public: const int heightMin{ 100 };
	public: const int weightMin{ 20 };

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->Label_RegistrationTitle = (gcnew System::Windows::Forms::Label());
			this->TextBox_Firstname = (gcnew System::Windows::Forms::TextBox());
			this->Label_Nachname = (gcnew System::Windows::Forms::Label());
			this->TextBox_Lastname = (gcnew System::Windows::Forms::TextBox());
			this->Label_Vorname = (gcnew System::Windows::Forms::Label());
			this->Label_Geschlecht = (gcnew System::Windows::Forms::Label());
			this->RadioButton_weiblich = (gcnew System::Windows::Forms::RadioButton());
			this->Label_Geburtsdatum = (gcnew System::Windows::Forms::Label());
			this->NumericUpDown_Groesse = (gcnew System::Windows::Forms::NumericUpDown());
			this->Label_Groesse = (gcnew System::Windows::Forms::Label());
			this->Label_Gewicht = (gcnew System::Windows::Forms::Label());
			this->NumericUpDown_Gewicht = (gcnew System::Windows::Forms::NumericUpDown());
			this->Label_Benutzername = (gcnew System::Windows::Forms::Label());
			this->Label_Passwort = (gcnew System::Windows::Forms::Label());
			this->TextBox_Benutzername = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Passwort = (gcnew System::Windows::Forms::TextBox());
			this->Button_register = (gcnew System::Windows::Forms::Button());
			this->RadioButton_maennlich = (gcnew System::Windows::Forms::RadioButton());
			this->maskedTextBox_Birthday = (gcnew System::Windows::Forms::MaskedTextBox());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ComboBox_Bewegungsgruppe = (gcnew System::Windows::Forms::ComboBox());
			this->Label_Bewegungsgruppe = (gcnew System::Windows::Forms::Label());
			this->ComboBox_Ziel = (gcnew System::Windows::Forms::ComboBox());
			this->Label_Ziel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Groesse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Gewicht))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Label_RegistrationTitle
			// 
			this->Label_RegistrationTitle->AutoSize = true;
			this->Label_RegistrationTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_RegistrationTitle->Location = System::Drawing::Point(544, 22);
			this->Label_RegistrationTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_RegistrationTitle->Name = L"Label_RegistrationTitle";
			this->Label_RegistrationTitle->Size = System::Drawing::Size(426, 51);
			this->Label_RegistrationTitle->TabIndex = 1;
			this->Label_RegistrationTitle->Text = L"FitMeUp! - Registration";
			this->Label_RegistrationTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBox_Firstname
			// 
			this->TextBox_Firstname->BackColor = System::Drawing::Color::White;
			this->TextBox_Firstname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Firstname->Location = System::Drawing::Point(542, 139);
			this->TextBox_Firstname->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Firstname->Name = L"TextBox_Firstname";
			this->TextBox_Firstname->Size = System::Drawing::Size(438, 24);
			this->TextBox_Firstname->TabIndex = 5;
			// 
			// Label_Nachname
			// 
			this->Label_Nachname->AutoSize = true;
			this->Label_Nachname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Nachname->Location = System::Drawing::Point(378, 175);
			this->Label_Nachname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Nachname->Name = L"Label_Nachname";
			this->Label_Nachname->Size = System::Drawing::Size(134, 25);
			this->Label_Nachname->TabIndex = 4;
			this->Label_Nachname->Text = L"Nachname";
			// 
			// TextBox_Lastname
			// 
			this->TextBox_Lastname->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->TextBox_Lastname->BackColor = System::Drawing::Color::White;
			this->TextBox_Lastname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Lastname->Location = System::Drawing::Point(542, 198);
			this->TextBox_Lastname->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Lastname->Name = L"TextBox_Lastname";
			this->TextBox_Lastname->Size = System::Drawing::Size(438, 24);
			this->TextBox_Lastname->TabIndex = 7;
			// 
			// Label_Vorname
			// 
			this->Label_Vorname->AutoSize = true;
			this->Label_Vorname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Vorname->Location = System::Drawing::Point(378, 112);
			this->Label_Vorname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Vorname->Name = L"Label_Vorname";
			this->Label_Vorname->Size = System::Drawing::Size(114, 25);
			this->Label_Vorname->TabIndex = 6;
			this->Label_Vorname->Text = L"Vorname";
			// 
			// Label_Geschlecht
			// 
			this->Label_Geschlecht->AutoSize = true;
			this->Label_Geschlecht->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Geschlecht->Location = System::Drawing::Point(378, 475);
			this->Label_Geschlecht->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Geschlecht->Name = L"Label_Geschlecht";
			this->Label_Geschlecht->Size = System::Drawing::Size(273, 25);
			this->Label_Geschlecht->TabIndex = 8;
			this->Label_Geschlecht->Text = L"biologisches Geschlecht";
			// 
			// RadioButton_weiblich
			// 
			this->RadioButton_weiblich->AutoSize = true;
			this->RadioButton_weiblich->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RadioButton_weiblich->Location = System::Drawing::Point(670, 473);
			this->RadioButton_weiblich->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->RadioButton_weiblich->Name = L"RadioButton_weiblich";
			this->RadioButton_weiblich->Size = System::Drawing::Size(133, 29);
			this->RadioButton_weiblich->TabIndex = 10;
			this->RadioButton_weiblich->TabStop = true;
			this->RadioButton_weiblich->Text = L"weiblich";
			this->RadioButton_weiblich->UseVisualStyleBackColor = true;
			// 
			// Label_Geburtsdatum
			// 
			this->Label_Geburtsdatum->AutoSize = true;
			this->Label_Geburtsdatum->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Geburtsdatum->Location = System::Drawing::Point(378, 252);
			this->Label_Geburtsdatum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Geburtsdatum->Name = L"Label_Geburtsdatum";
			this->Label_Geburtsdatum->Size = System::Drawing::Size(170, 25);
			this->Label_Geburtsdatum->TabIndex = 11;
			this->Label_Geburtsdatum->Text = L"Geburtsdatum";
			// 
			// NumericUpDown_Groesse
			// 
			this->NumericUpDown_Groesse->Location = System::Drawing::Point(574, 327);
			this->NumericUpDown_Groesse->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->NumericUpDown_Groesse->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250, 0, 0, 0 });
			this->NumericUpDown_Groesse->Name = L"NumericUpDown_Groesse";
			this->NumericUpDown_Groesse->Size = System::Drawing::Size(128, 31);
			this->NumericUpDown_Groesse->TabIndex = 13;
			// 
			// Label_Groesse
			// 
			this->Label_Groesse->AutoSize = true;
			this->Label_Groesse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Groesse->Location = System::Drawing::Point(378, 327);
			this->Label_Groesse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Groesse->Name = L"Label_Groesse";
			this->Label_Groesse->Size = System::Drawing::Size(143, 25);
			this->Label_Groesse->TabIndex = 14;
			this->Label_Groesse->Text = L"Größe in cm";
			// 
			// Label_Gewicht
			// 
			this->Label_Gewicht->AutoSize = true;
			this->Label_Gewicht->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Gewicht->Location = System::Drawing::Point(378, 394);
			this->Label_Gewicht->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Gewicht->Name = L"Label_Gewicht";
			this->Label_Gewicht->Size = System::Drawing::Size(159, 25);
			this->Label_Gewicht->TabIndex = 15;
			this->Label_Gewicht->Text = L"Gewicht in kg";
			// 
			// NumericUpDown_Gewicht
			// 
			this->NumericUpDown_Gewicht->Location = System::Drawing::Point(574, 394);
			this->NumericUpDown_Gewicht->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->NumericUpDown_Gewicht->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->NumericUpDown_Gewicht->Name = L"NumericUpDown_Gewicht";
			this->NumericUpDown_Gewicht->Size = System::Drawing::Size(128, 31);
			this->NumericUpDown_Gewicht->TabIndex = 16;
			// 
			// Label_Benutzername
			// 
			this->Label_Benutzername->AutoSize = true;
			this->Label_Benutzername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Benutzername->Location = System::Drawing::Point(378, 648);
			this->Label_Benutzername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Benutzername->Name = L"Label_Benutzername";
			this->Label_Benutzername->Size = System::Drawing::Size(167, 25);
			this->Label_Benutzername->TabIndex = 17;
			this->Label_Benutzername->Text = L"Benutzername";
			// 
			// Label_Passwort
			// 
			this->Label_Passwort->AutoSize = true;
			this->Label_Passwort->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Passwort->Location = System::Drawing::Point(378, 717);
			this->Label_Passwort->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Passwort->Name = L"Label_Passwort";
			this->Label_Passwort->Size = System::Drawing::Size(107, 25);
			this->Label_Passwort->TabIndex = 18;
			this->Label_Passwort->Text = L"Passwort";
			// 
			// TextBox_Benutzername
			// 
			this->TextBox_Benutzername->BackColor = System::Drawing::Color::White;
			this->TextBox_Benutzername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Benutzername->Location = System::Drawing::Point(560, 672);
			this->TextBox_Benutzername->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Benutzername->Name = L"TextBox_Benutzername";
			this->TextBox_Benutzername->Size = System::Drawing::Size(438, 24);
			this->TextBox_Benutzername->TabIndex = 19;
			// 
			// TextBox_Passwort
			// 
			this->TextBox_Passwort->BackColor = System::Drawing::Color::White;
			this->TextBox_Passwort->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Passwort->Location = System::Drawing::Point(574, 728);
			this->TextBox_Passwort->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Passwort->Name = L"TextBox_Passwort";
			this->TextBox_Passwort->PasswordChar = '*';
			this->TextBox_Passwort->Size = System::Drawing::Size(438, 24);
			this->TextBox_Passwort->TabIndex = 20;
			// 
			// Button_register
			// 
			this->Button_register->BackColor = System::Drawing::Color::Transparent;
			this->Button_register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_register->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_register->ForeColor = System::Drawing::Color::White;
			this->Button_register->Location = System::Drawing::Point(0, 2);
			this->Button_register->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Button_register->Name = L"Button_register";
			this->Button_register->Size = System::Drawing::Size(628, 58);
			this->Button_register->TabIndex = 22;
			this->Button_register->Text = L"registrieren";
			this->Button_register->UseVisualStyleBackColor = false;
			this->Button_register->Click += gcnew System::EventHandler(this, &RegistrationForm::Button_register_Click);
			// 
			// RadioButton_maennlich
			// 
			this->RadioButton_maennlich->AutoSize = true;
			this->RadioButton_maennlich->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RadioButton_maennlich->Location = System::Drawing::Point(824, 473);
			this->RadioButton_maennlich->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->RadioButton_maennlich->Name = L"RadioButton_maennlich";
			this->RadioButton_maennlich->Size = System::Drawing::Size(143, 29);
			this->RadioButton_maennlich->TabIndex = 23;
			this->RadioButton_maennlich->TabStop = true;
			this->RadioButton_maennlich->Text = L"männlich";
			this->RadioButton_maennlich->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox_Birthday
			// 
			this->maskedTextBox_Birthday->BackColor = System::Drawing::Color::White;
			this->maskedTextBox_Birthday->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox_Birthday->Location = System::Drawing::Point(574, 266);
			this->maskedTextBox_Birthday->Margin = System::Windows::Forms::Padding(6);
			this->maskedTextBox_Birthday->Mask = L"0000-00-00";
			this->maskedTextBox_Birthday->Name = L"maskedTextBox_Birthday";
			this->maskedTextBox_Birthday->Size = System::Drawing::Size(438, 24);
			this->maskedTextBox_Birthday->TabIndex = 25;
			this->maskedTextBox_Birthday->ValidatingType = System::DateTime::typeid;
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
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(529, 98);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox1->MaxLength = 32767;
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox1->TabIndex = 26;
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
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(542, 158);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox2->MaxLength = 32767;
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox2->TabIndex = 27;
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox3
			// 
			this->bunifuMaterialTextbox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox3->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox3->Enabled = false;
			this->bunifuMaterialTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox3->ForeColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox3->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox3->HintText = L"";
			this->bunifuMaterialTextbox3->isPassword = false;
			this->bunifuMaterialTextbox3->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox3->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox3->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox3->LineThickness = 1;
			this->bunifuMaterialTextbox3->Location = System::Drawing::Point(560, 225);
			this->bunifuMaterialTextbox3->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox3->MaxLength = 32767;
			this->bunifuMaterialTextbox3->Name = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox3->TabIndex = 28;
			this->bunifuMaterialTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMaterialTextbox4->Location = System::Drawing::Point(574, 627);
			this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox4->MaxLength = 32767;
			this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
			this->bunifuMaterialTextbox4->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox4->TabIndex = 29;
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
			this->bunifuMaterialTextbox5->Location = System::Drawing::Point(574, 687);
			this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(8);
			this->bunifuMaterialTextbox5->MaxLength = 32767;
			this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
			this->bunifuMaterialTextbox5->Size = System::Drawing::Size(438, 71);
			this->bunifuMaterialTextbox5->TabIndex = 30;
			this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->Button_register);
			this->panel1->Location = System::Drawing::Point(398, 785);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(628, 58);
			this->panel1->TabIndex = 31;
			// 
			// ComboBox_Bewegungsgruppe
			// 
			this->ComboBox_Bewegungsgruppe->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBox_Bewegungsgruppe->FormattingEnabled = true;
			this->ComboBox_Bewegungsgruppe->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"sitzen", L"sitzen + gehen + stehen",
					L"gehen + stehen", L"stehen", L"koerperlich anstrengende Arbeit"
			});
			this->ComboBox_Bewegungsgruppe->Location = System::Drawing::Point(618, 587);
			this->ComboBox_Bewegungsgruppe->Margin = System::Windows::Forms::Padding(2);
			this->ComboBox_Bewegungsgruppe->Name = L"ComboBox_Bewegungsgruppe";
			this->ComboBox_Bewegungsgruppe->Size = System::Drawing::Size(406, 33);
			this->ComboBox_Bewegungsgruppe->TabIndex = 35;
			// 
			// Label_Bewegungsgruppe
			// 
			this->Label_Bewegungsgruppe->AutoSize = true;
			this->Label_Bewegungsgruppe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Bewegungsgruppe->Location = System::Drawing::Point(378, 588);
			this->Label_Bewegungsgruppe->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Bewegungsgruppe->Name = L"Label_Bewegungsgruppe";
			this->Label_Bewegungsgruppe->Size = System::Drawing::Size(217, 25);
			this->Label_Bewegungsgruppe->TabIndex = 34;
			this->Label_Bewegungsgruppe->Text = L"Bewegungsgruppe";
			// 
			// ComboBox_Ziel
			// 
			this->ComboBox_Ziel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBox_Ziel->FormattingEnabled = true;
			this->ComboBox_Ziel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"abnehmen", L"Muskelaufbau", L"Fitness verbessern" });
			this->ComboBox_Ziel->Location = System::Drawing::Point(618, 533);
			this->ComboBox_Ziel->Margin = System::Windows::Forms::Padding(2);
			this->ComboBox_Ziel->Name = L"ComboBox_Ziel";
			this->ComboBox_Ziel->Size = System::Drawing::Size(406, 33);
			this->ComboBox_Ziel->TabIndex = 33;
			// 
			// Label_Ziel
			// 
			this->Label_Ziel->AutoSize = true;
			this->Label_Ziel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Label_Ziel->Location = System::Drawing::Point(378, 533);
			this->Label_Ziel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Ziel->Name = L"Label_Ziel";
			this->Label_Ziel->Size = System::Drawing::Size(47, 25);
			this->Label_Ziel->TabIndex = 32;
			this->Label_Ziel->Text = L"Ziel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->label1->Location = System::Drawing::Point(698, 261);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 25);
			this->label1->TabIndex = 36;
			this->label1->Text = L"(YYYY-MM-DD)";
			// 
			// RegistrationForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1404, 894);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ComboBox_Bewegungsgruppe);
			this->Controls->Add(this->Label_Bewegungsgruppe);
			this->Controls->Add(this->ComboBox_Ziel);
			this->Controls->Add(this->Label_Ziel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->maskedTextBox_Birthday);
			this->Controls->Add(this->RadioButton_maennlich);
			this->Controls->Add(this->Label_Nachname);
			this->Controls->Add(this->TextBox_Passwort);
			this->Controls->Add(this->TextBox_Benutzername);
			this->Controls->Add(this->Label_Passwort);
			this->Controls->Add(this->Label_Benutzername);
			this->Controls->Add(this->NumericUpDown_Gewicht);
			this->Controls->Add(this->Label_Gewicht);
			this->Controls->Add(this->Label_Groesse);
			this->Controls->Add(this->NumericUpDown_Groesse);
			this->Controls->Add(this->Label_Geburtsdatum);
			this->Controls->Add(this->RadioButton_weiblich);
			this->Controls->Add(this->Label_Geschlecht);
			this->Controls->Add(this->TextBox_Lastname);
			this->Controls->Add(this->Label_Vorname);
			this->Controls->Add(this->TextBox_Firstname);
			this->Controls->Add(this->Label_RegistrationTitle);
			this->Controls->Add(this->bunifuMaterialTextbox1);
			this->Controls->Add(this->bunifuMaterialTextbox2);
			this->Controls->Add(this->bunifuMaterialTextbox3);
			this->Controls->Add(this->bunifuMaterialTextbox4);
			this->Controls->Add(this->bunifuMaterialTextbox5);
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistrationForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Groesse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown_Gewicht))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Action Methoden
		private: System::Void Button_register_Click(System::Object^ sender, System::EventArgs^ e);
};
}




