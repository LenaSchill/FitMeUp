
#pragma once
#include "Eingabe.h"
#include "Nutzerprofil.h"

namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für EingabeForm
	/// </summary>
	public ref class EingabeForm : public System::Windows::Forms::Form
	{
	public:
		EingabeForm()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~EingabeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ Label_Eingabewerte;
	private: System::Windows::Forms::Label^ Label_Wasserwerte;
	private: System::Windows::Forms::Label^ Label_Kalorienwerte;
	private: System::Windows::Forms::Label^ Label_WassereingabeWert;
	private: System::Windows::Forms::Label^ Label_KalorieneingabeWert;
	private: System::Windows::Forms::Label^ Label_Trainingsart;
	private: System::Windows::Forms::ComboBox^ ComboBox_Trainingsart;
	private: System::Windows::Forms::TextBox^ TextBox_Trainingseinheit;
	private: System::Windows::Forms::Label^ Label_Trainingseinheit;
	private: System::Windows::Forms::Button^ Button_Eingabe;
	private: System::Windows::Forms::TextBox^ TextBox_Kalorieneingabe;
	private: System::Windows::Forms::TextBox^ TextBox_Wassereingabe;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Eingabe^ eingabe = gcnew Eingabe();
		Training^ training = gcnew Training();
		Nutzerprofil^ profil = gcnew Nutzerprofil();

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Label_Trainingsdauer;
	private: System::Windows::Forms::Label^ Label_verbrannteKalorien;
	private: System::Windows::Forms::Label^ Label_KalorienVerbWert;
	private: System::Windows::Forms::Label^ Label_Hinweis;

	private: System::Windows::Forms::Label^ Label_TrainingsdauerWert;


		  
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->Label_Trainingsart = (gcnew System::Windows::Forms::Label());
			this->ComboBox_Trainingsart = (gcnew System::Windows::Forms::ComboBox());
			this->TextBox_Trainingseinheit = (gcnew System::Windows::Forms::TextBox());
			this->Label_Trainingseinheit = (gcnew System::Windows::Forms::Label());
			this->Button_Eingabe = (gcnew System::Windows::Forms::Button());
			this->TextBox_Kalorieneingabe = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Wassereingabe = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Label_Hinweis = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
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
			this->panel3->Location = System::Drawing::Point(16, 96);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1129, 190);
			this->panel3->TabIndex = 53;
			// 
			// Label_verbrannteKalorien
			// 
			this->Label_verbrannteKalorien->AutoSize = true;
			this->Label_verbrannteKalorien->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_verbrannteKalorien->Location = System::Drawing::Point(595, 111);
			this->Label_verbrannteKalorien->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_verbrannteKalorien->Name = L"Label_verbrannteKalorien";
			this->Label_verbrannteKalorien->Size = System::Drawing::Size(254, 30);
			this->Label_verbrannteKalorien->TabIndex = 14;
			this->Label_verbrannteKalorien->Text = L"verbrannte Kalorien:";
			// 
			// Label_KalorienVerbWert
			// 
			this->Label_KalorienVerbWert->AutoSize = true;
			this->Label_KalorienVerbWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_KalorienVerbWert->Location = System::Drawing::Point(916, 115);
			this->Label_KalorienVerbWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_KalorienVerbWert->Name = L"Label_KalorienVerbWert";
			this->Label_KalorienVerbWert->Size = System::Drawing::Size(0, 30);
			this->Label_KalorienVerbWert->TabIndex = 15;
			// 
			// Label_Trainingsdauer
			// 
			this->Label_Trainingsdauer->AutoSize = true;
			this->Label_Trainingsdauer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_Trainingsdauer->Location = System::Drawing::Point(595, 69);
			this->Label_Trainingsdauer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Trainingsdauer->Name = L"Label_Trainingsdauer";
			this->Label_Trainingsdauer->Size = System::Drawing::Size(192, 30);
			this->Label_Trainingsdauer->TabIndex = 12;
			this->Label_Trainingsdauer->Text = L"Trainingsdauer:";
			// 
			// Label_TrainingsdauerWert
			// 
			this->Label_TrainingsdauerWert->AutoSize = true;
			this->Label_TrainingsdauerWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_TrainingsdauerWert->Location = System::Drawing::Point(916, 69);
			this->Label_TrainingsdauerWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_TrainingsdauerWert->Name = L"Label_TrainingsdauerWert";
			this->Label_TrainingsdauerWert->Size = System::Drawing::Size(0, 30);
			this->Label_TrainingsdauerWert->TabIndex = 13;
			// 
			// Label_Eingabewerte
			// 
			this->Label_Eingabewerte->AutoSize = true;
			this->Label_Eingabewerte->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Eingabewerte->ForeColor = System::Drawing::Color::DimGray;
			this->Label_Eingabewerte->Location = System::Drawing::Point(28, 15);
			this->Label_Eingabewerte->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Eingabewerte->Name = L"Label_Eingabewerte";
			this->Label_Eingabewerte->Size = System::Drawing::Size(180, 32);
			this->Label_Eingabewerte->TabIndex = 7;
			this->Label_Eingabewerte->Text = L"Deine Werte:";
			// 
			// Label_Wasserwerte
			// 
			this->Label_Wasserwerte->AutoSize = true;
			this->Label_Wasserwerte->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_Wasserwerte->Location = System::Drawing::Point(28, 69);
			this->Label_Wasserwerte->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Wasserwerte->Name = L"Label_Wasserwerte";
			this->Label_Wasserwerte->Size = System::Drawing::Size(184, 30);
			this->Label_Wasserwerte->TabIndex = 8;
			this->Label_Wasserwerte->Text = L"Wasser (in ml):";
			// 
			// Label_Kalorienwerte
			// 
			this->Label_Kalorienwerte->AutoSize = true;
			this->Label_Kalorienwerte->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_Kalorienwerte->Location = System::Drawing::Point(28, 111);
			this->Label_Kalorienwerte->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Kalorienwerte->Name = L"Label_Kalorienwerte";
			this->Label_Kalorienwerte->Size = System::Drawing::Size(218, 30);
			this->Label_Kalorienwerte->TabIndex = 9;
			this->Label_Kalorienwerte->Text = L"Kalorien (in kcal):";
			// 
			// Label_WassereingabeWert
			// 
			this->Label_WassereingabeWert->AutoSize = true;
			this->Label_WassereingabeWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_WassereingabeWert->Location = System::Drawing::Point(307, 71);
			this->Label_WassereingabeWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_WassereingabeWert->Name = L"Label_WassereingabeWert";
			this->Label_WassereingabeWert->Size = System::Drawing::Size(0, 30);
			this->Label_WassereingabeWert->TabIndex = 10;
			// 
			// Label_KalorieneingabeWert
			// 
			this->Label_KalorieneingabeWert->AutoSize = true;
			this->Label_KalorieneingabeWert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->Label_KalorieneingabeWert->Location = System::Drawing::Point(307, 115);
			this->Label_KalorieneingabeWert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_KalorieneingabeWert->Name = L"Label_KalorieneingabeWert";
			this->Label_KalorieneingabeWert->Size = System::Drawing::Size(0, 30);
			this->Label_KalorieneingabeWert->TabIndex = 11;
			// 
			// Label_Trainingsart
			// 
			this->Label_Trainingsart->AutoSize = true;
			this->Label_Trainingsart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Trainingsart->Location = System::Drawing::Point(583, 445);
			this->Label_Trainingsart->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Trainingsart->Name = L"Label_Trainingsart";
			this->Label_Trainingsart->Size = System::Drawing::Size(146, 30);
			this->Label_Trainingsart->TabIndex = 52;
			this->Label_Trainingsart->Text = L"Trainingsart";
			// 
			// ComboBox_Trainingsart
			// 
			this->ComboBox_Trainingsart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBox_Trainingsart->FormattingEnabled = true;
			this->ComboBox_Trainingsart->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L"Joggen", L"Fahrrad fahren", L"Basketball",
					L"Fussball", L"Handball", L"Volleyball", L"Spazieren gehen", L"Wandern", L"Badminton", L"Tischtennis", L"Tennis", L"Aerobics",
					L"Kickboxen", L"Boxen", L"Zumba", L"Crossfit", L"Martial Arts", L"MMA", L"Golf", L"Bowling", L"Schwimmen", L"Liegestuetze", L"Kniebeuge",
					L"Ausfallschritte", L"Burpees", L"Crunches", L"Sit Ups", L"Monatain Climbers", L"Plank", L"Hampelmann", L"Klimmzuege", L"Beckenheben",
					L"Box Jumps", L"yoga", L"Dehnen"
			});
			this->ComboBox_Trainingsart->Location = System::Drawing::Point(876, 442);
			this->ComboBox_Trainingsart->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->ComboBox_Trainingsart->Name = L"ComboBox_Trainingsart";
			this->ComboBox_Trainingsart->Size = System::Drawing::Size(268, 33);
			this->ComboBox_Trainingsart->TabIndex = 51;
			// 
			// TextBox_Trainingseinheit
			// 
			this->TextBox_Trainingseinheit->ForeColor = System::Drawing::Color::Gray;
			this->TextBox_Trainingseinheit->Location = System::Drawing::Point(876, 380);
			this->TextBox_Trainingseinheit->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Trainingseinheit->Name = L"TextBox_Trainingseinheit";
			this->TextBox_Trainingseinheit->Size = System::Drawing::Size(272, 31);
			this->TextBox_Trainingseinheit->TabIndex = 50;
			// 
			// Label_Trainingseinheit
			// 
			this->Label_Trainingseinheit->AutoSize = true;
			this->Label_Trainingseinheit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Trainingseinheit->Location = System::Drawing::Point(583, 385);
			this->Label_Trainingseinheit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Trainingseinheit->Name = L"Label_Trainingseinheit";
			this->Label_Trainingseinheit->Size = System::Drawing::Size(294, 30);
			this->Label_Trainingseinheit->TabIndex = 49;
			this->Label_Trainingseinheit->Text = L"Trainingseinheit (in min)";
			// 
			// Button_Eingabe
			// 
			this->Button_Eingabe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Button_Eingabe->Location = System::Drawing::Point(925, 548);
			this->Button_Eingabe->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Button_Eingabe->Name = L"Button_Eingabe";
			this->Button_Eingabe->Size = System::Drawing::Size(220, 52);
			this->Button_Eingabe->TabIndex = 42;
			this->Button_Eingabe->Text = L"Eingabe";
			this->Button_Eingabe->UseVisualStyleBackColor = true;
			this->Button_Eingabe->Click += gcnew System::EventHandler(this, &EingabeForm::Button_Eingabe_Click);
			// 
			// TextBox_Kalorieneingabe
			// 
			this->TextBox_Kalorieneingabe->ForeColor = System::Drawing::Color::Gray;
			this->TextBox_Kalorieneingabe->Location = System::Drawing::Point(280, 444);
			this->TextBox_Kalorieneingabe->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Kalorieneingabe->Name = L"TextBox_Kalorieneingabe";
			this->TextBox_Kalorieneingabe->Size = System::Drawing::Size(272, 31);
			this->TextBox_Kalorieneingabe->TabIndex = 41;
			// 
			// TextBox_Wassereingabe
			// 
			this->TextBox_Wassereingabe->ForeColor = System::Drawing::Color::Gray;
			this->TextBox_Wassereingabe->Location = System::Drawing::Point(280, 385);
			this->TextBox_Wassereingabe->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->TextBox_Wassereingabe->Name = L"TextBox_Wassereingabe";
			this->TextBox_Wassereingabe->Size = System::Drawing::Size(272, 31);
			this->TextBox_Wassereingabe->TabIndex = 40;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->label1->Location = System::Drawing::Point(28, 385);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 30);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Wasser (in ml)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->label2->Location = System::Drawing::Point(28, 444);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 30);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Kalorien (in Kcal)";
			// 
			// Label_Hinweis
			// 
			this->Label_Hinweis->AutoSize = true;
			this->Label_Hinweis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Hinweis->Location = System::Drawing::Point(28, 39);
			this->Label_Hinweis->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Hinweis->Name = L"Label_Hinweis";
			this->Label_Hinweis->Size = System::Drawing::Size(835, 25);
			this->Label_Hinweis->TabIndex = 56;
			this->Label_Hinweis->Text = L"Hier können Sie Ihre Werte eingeben und auch Ihre aktuellen Werte einsehen.";
			// 
			// EingabeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 764);
			this->Controls->Add(this->Label_Hinweis);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->Label_Trainingsart);
			this->Controls->Add(this->ComboBox_Trainingsart);
			this->Controls->Add(this->TextBox_Trainingseinheit);
			this->Controls->Add(this->Label_Trainingseinheit);
			this->Controls->Add(this->Button_Eingabe);
			this->Controls->Add(this->TextBox_Kalorieneingabe);
			this->Controls->Add(this->TextBox_Wassereingabe);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"EingabeForm";
			this->Text = L"EingabeForm";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Action Funktionen
		System::Void Button_Eingabe_Click(System::Object^ sender, System::EventArgs^ e);
		public: System::Void Button_Aktualisieren_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void werteAktualisieren(Label^ Label_Wasserwerte, Label^ Label_Kalorienwerte, Label^ Label_KalorienVerbWert, Label^ Label_TrainingsdauerWert);
#pragma endregion
};
}
