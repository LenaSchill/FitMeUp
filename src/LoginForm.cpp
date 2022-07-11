#include "LoginForm.h"
#include "Hilfsfunktionen_GUI.h"

using namespace Loginsystem;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
[STAThreadAttribute]

// +++++ start of the programm +++++++
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Loginsystem::LoginForm form;
	Application::Run(% form);								// Program displays LoginForm as home screen
}

//Login-Button-Click
System::Void LoginForm::Button_Login_Click(System::Object^ sender, System::EventArgs^ e){

	//Save the inputs
	std::string username = textBoxAuslesen(TextBox_Username);
	std::string password = textBoxAuslesen(TextBox_Password);


	//Check if fields are empty
	if (username == "" || password == "") {
		Label_Controll->Text = "Bitte füllen Sie alle Felder aus";
	}
	else {

		//call login (LogicLoginsystem)
		std::string outputSTD = logic->login(username, password);
		String^ output = gcnew String(outputSTD.c_str());

		if (output == "Login war erfolgreich.") {
			Label_Controll->Text = output;
			//open MainForm
			this->Hide();
			mainForm->ShowDialog();
			this->Close();
		}
		else {
			Label_Controll->Text = output;
		}
	}
}

//Registration-Button-Click --> open RegistrationForm
System::Void LoginForm::Label_Registratrion_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	regForm->ShowDialog();
	this->Show();
}


System::Void LoginForm::TextBox_Username_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox_Username->Text == "Username") {
		TextBox_Username->Text = "";
	}
}
System::Void LoginForm::TextBox_Password_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox_Password->Text == "Password") {
		TextBox_Password->Text = "";
	}
}
System::Void LoginForm::LoginForm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox_Username->Text == "") {
		TextBox_Username->Text == "Username";
	}
	if (TextBox_Password->Text == "") {
		TextBox_Password->Text == "Password";
	}
}


