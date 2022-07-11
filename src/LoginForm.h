
#pragma once
#include "LogicLoginsystem.h"
#include "MainForm.h"
#include "RegistrationForm.h"
#include "Hilfsfunktionen_GUI.h"


namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class LoginForm : public System::Windows::Forms::Form{
	public:
		LoginForm(void){InitializeComponent();}

	protected:
		~LoginForm(){
			if (components){
				delete components;
			}
		}
		
	protected:
		private: System::Windows::Forms::TextBox^ TextBox_Username;
		private: System::Windows::Forms::TextBox^ TextBox_Password;
		private: System::Windows::Forms::Button^ Button_Login;
		private: System::Windows::Forms::Label^ Label_Controll;
		private: System::Windows::Forms::Label^ Label_Registratrion;
		private: System::Windows::Forms::Label^ Label_uid;


	private:
		System::ComponentModel::Container^ components;
		LogicLoginsystem^ logic = gcnew LogicLoginsystem();
		RegistrationForm^ regForm = gcnew RegistrationForm(); 
		MainForm^ mainForm = gcnew MainForm();

	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox2;
	private: System::Windows::Forms::Panel^ panel1;
		  
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->TextBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->Button_Login = (gcnew System::Windows::Forms::Button());
			this->Label_Controll = (gcnew System::Windows::Forms::Label());
			this->Label_Registratrion = (gcnew System::Windows::Forms::Label());
			this->Label_uid = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TextBox_Username
			// 
			this->TextBox_Username->BackColor = System::Drawing::Color::White;
			this->TextBox_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Username->ForeColor = System::Drawing::Color::Gray;
			this->TextBox_Username->Location = System::Drawing::Point(311, 191);
			this->TextBox_Username->Name = L"TextBox_Username";
			this->TextBox_Username->Size = System::Drawing::Size(324, 20);
			this->TextBox_Username->TabIndex = 3;
			this->TextBox_Username->Text = L"Username";
			this->TextBox_Username->Click += gcnew System::EventHandler(this, &LoginForm::TextBox_Username_Click);
			// 
			// TextBox_Password
			// 
			this->TextBox_Password->BackColor = System::Drawing::Color::White;
			this->TextBox_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Password->ForeColor = System::Drawing::Color::Gray;
			this->TextBox_Password->Location = System::Drawing::Point(309, 245);
			this->TextBox_Password->Name = L"TextBox_Password";
			this->TextBox_Password->PasswordChar = '*';
			this->TextBox_Password->Size = System::Drawing::Size(326, 20);
			this->TextBox_Password->TabIndex = 4;
			this->TextBox_Password->Text = L"Password";
			this->TextBox_Password->Click += gcnew System::EventHandler(this, &LoginForm::TextBox_Password_Click);
			// 
			// Button_Login
			// 
			this->Button_Login->BackColor = System::Drawing::Color::Transparent;
			this->Button_Login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Login->ForeColor = System::Drawing::Color::White;
			this->Button_Login->Location = System::Drawing::Point(0, 0);
			this->Button_Login->Name = L"Button_Login";
			this->Button_Login->Size = System::Drawing::Size(324, 55);
			this->Button_Login->TabIndex = 5;
			this->Button_Login->Text = L"Login";
			this->Button_Login->UseVisualStyleBackColor = false;
			this->Button_Login->Click += gcnew System::EventHandler(this, &LoginForm::Button_Login_Click);
			// 
			// Label_Controll
			// 
			this->Label_Controll->AutoSize = true;
			this->Label_Controll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Label_Controll->ForeColor = System::Drawing::Color::Red;
			this->Label_Controll->Location = System::Drawing::Point(34, 325);
			this->Label_Controll->Name = L"Label_Controll";
			this->Label_Controll->Size = System::Drawing::Size(0, 25);
			this->Label_Controll->TabIndex = 6;
			// 
			// Label_Registratrion
			// 
			this->Label_Registratrion->AutoSize = true;
			this->Label_Registratrion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Registratrion->ForeColor = System::Drawing::Color::DarkGray;
			this->Label_Registratrion->Location = System::Drawing::Point(360, 380);
			this->Label_Registratrion->Name = L"Label_Registratrion";
			this->Label_Registratrion->Size = System::Drawing::Size(224, 21);
			this->Label_Registratrion->TabIndex = 7;
			this->Label_Registratrion->Text = L"Neu hier\? - Jetzt registrieren";
			this->Label_Registratrion->Click += gcnew System::EventHandler(this, &LoginForm::Label_Registratrion_Click);
			// 
			// Label_uid
			// 
			this->Label_uid->AutoSize = true;
			this->Label_uid->Location = System::Drawing::Point(516, 223);
			this->Label_uid->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_uid->Name = L"Label_uid";
			this->Label_uid->Size = System::Drawing::Size(0, 20);
			this->Label_uid->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(299, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 60);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::LoginForm_Click);
			// 
			// bunifuMaterialTextbox1
			// 
			this->bunifuMaterialTextbox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox1->BackColor = System::Drawing::Color::White;
			this->bunifuMaterialTextbox1->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::Transparent;
			this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox1->HintText = L"";
			this->bunifuMaterialTextbox1->isPassword = false;
			this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox1->LineThickness = 1;
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(309, 182);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox1->MaxLength = 32767;
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(326, 33);
			this->bunifuMaterialTextbox1->TabIndex = 14;
			this->bunifuMaterialTextbox1->Text = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox2
			// 
			this->bunifuMaterialTextbox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox2->BackColor = System::Drawing::Color::White;
			this->bunifuMaterialTextbox2->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::Transparent;
			this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox2->HintText = L"";
			this->bunifuMaterialTextbox2->isPassword = true;
			this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Silver;
			this->bunifuMaterialTextbox2->LineThickness = 1;
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(309, 236);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox2->MaxLength = 32767;
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(326, 33);
			this->bunifuMaterialTextbox2->TabIndex = 15;
			this->bunifuMaterialTextbox2->Text = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->Button_Login);
			this->panel1->Location = System::Drawing::Point(311, 293);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(324, 55);
			this->panel1->TabIndex = 16;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(929, 521);
			this->Controls->Add(this->TextBox_Password);
			this->Controls->Add(this->TextBox_Username);
			this->Controls->Add(this->bunifuMaterialTextbox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Label_uid);
			this->Controls->Add(this->Label_Registratrion);
			this->Controls->Add(this->Label_Controll);
			this->Controls->Add(this->bunifuMaterialTextbox2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Click += gcnew System::EventHandler(this, &LoginForm::LoginForm_Click);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Action Methoden
		private: System::Void Button_Login_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Label_Registratrion_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void TextBox_Username_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void TextBox_Password_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void LoginForm_Click(System::Object^ sender, System::EventArgs^ e);

};
}