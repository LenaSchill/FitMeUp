
#pragma once
#include "Nutzerprofil.h"
#include "Eingabe.h"
#include "Uebungsplan.h"

namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für UebungsplanForm
	/// </summary>
	public ref class UebungsplanForm : public System::Windows::Forms::Form
	{
	public:
		UebungsplanForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			uebungsplanAnzeigen();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~UebungsplanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_Uebungsplan;
	protected:
	private: System::Windows::Forms::Button^ Button_EingabeUebungsplan;
	private: System::Windows::Forms::Label^ Label_Hinweis;
	private: System::Windows::Forms::DataGridView^ DataGridView_Uebungsplan;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ geschafft;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Beschreibung;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dauer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dauer_Rest;
	private: System::Windows::Forms::Label^ Label_Controleingabe;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;
		Nutzerprofil^ profil = gcnew Nutzerprofil();
		Eingabe^ eingabe = gcnew Eingabe();
		Uebungsplan^ uebungsplan = gcnew Uebungsplan();
	private: System::Windows::Forms::Label^ label1;
		   Training^ training = gcnew Training();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UebungsplanForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Label_Uebungsplan = (gcnew System::Windows::Forms::Label());
			this->Button_EingabeUebungsplan = (gcnew System::Windows::Forms::Button());
			this->Label_Hinweis = (gcnew System::Windows::Forms::Label());
			this->DataGridView_Uebungsplan = (gcnew System::Windows::Forms::DataGridView());
			this->geschafft = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Beschreibung = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dauer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dauer_Rest = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Label_Controleingabe = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView_Uebungsplan))->BeginInit();
			this->SuspendLayout();
			// 
			// Label_Uebungsplan
			// 
			this->Label_Uebungsplan->AutoSize = true;
			this->Label_Uebungsplan->Location = System::Drawing::Point(-414, 72);
			this->Label_Uebungsplan->Name = L"Label_Uebungsplan";
			this->Label_Uebungsplan->Size = System::Drawing::Size(132, 20);
			this->Label_Uebungsplan->TabIndex = 44;
			this->Label_Uebungsplan->Text = L"Dein Übungsplan";
			// 
			// Button_EingabeUebungsplan
			// 
			this->Button_EingabeUebungsplan->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->Button_EingabeUebungsplan->Location = System::Drawing::Point(642, 558);
			this->Button_EingabeUebungsplan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_EingabeUebungsplan->Name = L"Button_EingabeUebungsplan";
			this->Button_EingabeUebungsplan->Size = System::Drawing::Size(147, 42);
			this->Button_EingabeUebungsplan->TabIndex = 43;
			this->Button_EingabeUebungsplan->Text = L"Eingabe";
			this->Button_EingabeUebungsplan->UseVisualStyleBackColor = true;
			this->Button_EingabeUebungsplan->Click += gcnew System::EventHandler(this, &UebungsplanForm::Button_EingabeUebungsplan_Click);
			// 
			// Label_Hinweis
			// 
			this->Label_Hinweis->AutoSize = true;
			this->Label_Hinweis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7));
			this->Label_Hinweis->Location = System::Drawing::Point(64, 472);
			this->Label_Hinweis->Name = L"Label_Hinweis";
			this->Label_Hinweis->Size = System::Drawing::Size(740, 76);
			this->Label_Hinweis->TabIndex = 42;
			this->Label_Hinweis->Text = resources->GetString(L"Label_Hinweis.Text");
			this->Label_Hinweis->Click += gcnew System::EventHandler(this, &UebungsplanForm::Label_Hinweis_Click);
			// 
			// DataGridView_Uebungsplan
			// 
			this->DataGridView_Uebungsplan->AllowUserToAddRows = false;
			this->DataGridView_Uebungsplan->AllowUserToDeleteRows = false;
			this->DataGridView_Uebungsplan->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->DataGridView_Uebungsplan->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DataGridView_Uebungsplan->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView_Uebungsplan->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DataGridView_Uebungsplan->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView_Uebungsplan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->geschafft,
					this->Beschreibung, this->Dauer, this->Dauer_Rest
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridView_Uebungsplan->DefaultCellStyle = dataGridViewCellStyle2;
			this->DataGridView_Uebungsplan->Location = System::Drawing::Point(68, 64);
			this->DataGridView_Uebungsplan->Name = L"DataGridView_Uebungsplan";
			this->DataGridView_Uebungsplan->RowHeadersWidth = 82;
			this->DataGridView_Uebungsplan->RowTemplate->Height = 33;
			this->DataGridView_Uebungsplan->Size = System::Drawing::Size(721, 405);
			this->DataGridView_Uebungsplan->TabIndex = 41;
			// 
			// geschafft
			// 
			this->geschafft->HeaderText = L"geschafft";
			this->geschafft->MinimumWidth = 10;
			this->geschafft->Name = L"geschafft";
			this->geschafft->Width = 101;
			// 
			// Beschreibung
			// 
			this->Beschreibung->HeaderText = L"Beschreibung";
			this->Beschreibung->MinimumWidth = 10;
			this->Beschreibung->Name = L"Beschreibung";
			this->Beschreibung->ReadOnly = true;
			this->Beschreibung->Width = 164;
			// 
			// Dauer
			// 
			this->Dauer->HeaderText = L"Sekunden";
			this->Dauer->MinimumWidth = 10;
			this->Dauer->Name = L"Dauer";
			this->Dauer->ReadOnly = true;
			this->Dauer->Width = 133;
			// 
			// Dauer_Rest
			// 
			this->Dauer_Rest->HeaderText = L"Sekunden (Rest)";
			this->Dauer_Rest->MinimumWidth = 10;
			this->Dauer_Rest->Name = L"Dauer_Rest";
			this->Dauer_Rest->Width = 171;
			// 
			// Label_Controleingabe
			// 
			this->Label_Controleingabe->AutoSize = true;
			this->Label_Controleingabe->Location = System::Drawing::Point(241, 64);
			this->Label_Controleingabe->Name = L"Label_Controleingabe";
			this->Label_Controleingabe->Size = System::Drawing::Size(0, 20);
			this->Label_Controleingabe->TabIndex = 40;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(824, 42);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Durch abhaken und betätigen der \"Eingabe\"-Taste werden Ihre durchgeführten Übunge"
				L"n übernommen.\r\nSekunden (Rest) zeigt die Sekunden an, die noch zu erledigen sind"
				L".";
			// 
			// UebungsplanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(951, 611);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Label_Uebungsplan);
			this->Controls->Add(this->Button_EingabeUebungsplan);
			this->Controls->Add(this->Label_Hinweis);
			this->Controls->Add(this->DataGridView_Uebungsplan);
			this->Controls->Add(this->Label_Controleingabe);
			this->Name = L"UebungsplanForm";
			this->Text = L"UebungsplanForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView_Uebungsplan))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void uebungsplanAnzeigen();
		System::Void Button_EingabeUebungsplan_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Label_Hinweis_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	};
}
