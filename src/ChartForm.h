#pragma once
#include "Hilfsfunktionen.h"
#include "Nutzerprofil.h"
#include <msclr\marshal_cppstd.h>

namespace Loginsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für ChartForm
	/// </summary>
	public ref class ChartForm : public System::Windows::Forms::Form
	{
	public:
		int woche;
		ChartForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			woche = 0;
			Button_vor->Hide();
			CheckBox_Water_CheckedChanged(CheckBox_Water, nullptr);
			CheckBox_Calories_CheckedChanged(CheckBox_Calories, nullptr);
			CheckBox_EmpfehlungWater_CheckedChanged(CheckBox_EmpfehlungWater, nullptr);
			CheckBox_EmpfehlungCalories_CheckedChanged(CheckBox_EmfpehlungCalories, nullptr);
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~ChartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Chart_Verlauf;
	protected:

	protected:
	//private: System::Windows::Forms::Button^ Button_Show;
	private: System::Windows::Forms::CheckBox^ CheckBox_Water;
	private: System::Windows::Forms::CheckBox^ CheckBox_Calories;
	private: System::Windows::Forms::CheckBox^ CheckBox_EmpfehlungWater;
	private: System::Windows::Forms::CheckBox^ CheckBox_EmfpehlungCalories;
	private: System::Windows::Forms::Button^ Button_vor;
	private: System::Windows::Forms::Button^ Button_zurueck;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Chart_Verlauf = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->CheckBox_Water = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox_Calories = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox_EmpfehlungWater = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox_EmfpehlungCalories = (gcnew System::Windows::Forms::CheckBox());
			this->Button_vor = (gcnew System::Windows::Forms::Button());
			this->Button_zurueck = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart_Verlauf))->BeginInit();
			this->SuspendLayout();
			// 
			// Chart_Verlauf
			// 
			chartArea1->Name = L"ChartArea1";
			this->Chart_Verlauf->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->Chart_Verlauf->Legends->Add(legend1);
			this->Chart_Verlauf->Location = System::Drawing::Point(-28, 42);
			this->Chart_Verlauf->Margin = System::Windows::Forms::Padding(1);
			this->Chart_Verlauf->Name = L"Chart_Verlauf";
			series1->ChartArea = L"ChartArea1";
			series1->CustomProperties = L"EmptyPointValue=Zero";
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Water";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Calories";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"EmpfehlungCalories";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"EmpfehlungWater";
			series4->YValuesPerPoint = 2;
			this->Chart_Verlauf->Series->Add(series1);
			this->Chart_Verlauf->Series->Add(series2);
			this->Chart_Verlauf->Series->Add(series3);
			this->Chart_Verlauf->Series->Add(series4);
			this->Chart_Verlauf->Size = System::Drawing::Size(655, 298);
			this->Chart_Verlauf->TabIndex = 0;
			this->Chart_Verlauf->Text = L"Chart_Verlauf";
			// 
			// CheckBox_Water
			// 
			this->CheckBox_Water->AutoSize = true;
			this->CheckBox_Water->Checked = true;
			this->CheckBox_Water->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CheckBox_Water->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->CheckBox_Water->Location = System::Drawing::Point(55, 342);
			this->CheckBox_Water->Margin = System::Windows::Forms::Padding(1);
			this->CheckBox_Water->Name = L"CheckBox_Water";
			this->CheckBox_Water->Size = System::Drawing::Size(65, 21);
			this->CheckBox_Water->TabIndex = 2;
			this->CheckBox_Water->Text = L"Water";
			this->CheckBox_Water->UseVisualStyleBackColor = true;
			this->CheckBox_Water->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::CheckBox_Water_CheckedChanged);
			// 
			// CheckBox_Calories
			// 
			this->CheckBox_Calories->AutoSize = true;
			this->CheckBox_Calories->Checked = true;
			this->CheckBox_Calories->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CheckBox_Calories->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->CheckBox_Calories->Location = System::Drawing::Point(139, 342);
			this->CheckBox_Calories->Margin = System::Windows::Forms::Padding(1);
			this->CheckBox_Calories->Name = L"CheckBox_Calories";
			this->CheckBox_Calories->Size = System::Drawing::Size(75, 21);
			this->CheckBox_Calories->TabIndex = 3;
			this->CheckBox_Calories->Text = L"Calories";
			this->CheckBox_Calories->UseVisualStyleBackColor = true;
			this->CheckBox_Calories->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::CheckBox_Calories_CheckedChanged);
			// 
			// CheckBox_EmpfehlungWater
			// 
			this->CheckBox_EmpfehlungWater->AutoSize = true;
			this->CheckBox_EmpfehlungWater->Checked = true;
			this->CheckBox_EmpfehlungWater->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CheckBox_EmpfehlungWater->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->CheckBox_EmpfehlungWater->Location = System::Drawing::Point(234, 342);
			this->CheckBox_EmpfehlungWater->Margin = System::Windows::Forms::Padding(1);
			this->CheckBox_EmpfehlungWater->Name = L"CheckBox_EmpfehlungWater";
			this->CheckBox_EmpfehlungWater->Size = System::Drawing::Size(134, 21);
			this->CheckBox_EmpfehlungWater->TabIndex = 4;
			this->CheckBox_EmpfehlungWater->Text = L"EmpfehlungWater";
			this->CheckBox_EmpfehlungWater->UseVisualStyleBackColor = true;
			this->CheckBox_EmpfehlungWater->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::CheckBox_EmpfehlungWater_CheckedChanged);
			// 
			// CheckBox_EmfpehlungCalories
			// 
			this->CheckBox_EmfpehlungCalories->AutoSize = true;
			this->CheckBox_EmfpehlungCalories->Checked = true;
			this->CheckBox_EmfpehlungCalories->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CheckBox_EmfpehlungCalories->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->CheckBox_EmfpehlungCalories->Location = System::Drawing::Point(380, 342);
			this->CheckBox_EmfpehlungCalories->Margin = System::Windows::Forms::Padding(1);
			this->CheckBox_EmfpehlungCalories->Name = L"CheckBox_EmfpehlungCalories";
			this->CheckBox_EmfpehlungCalories->Size = System::Drawing::Size(144, 21);
			this->CheckBox_EmfpehlungCalories->TabIndex = 5;
			this->CheckBox_EmfpehlungCalories->Text = L"EmpfehlungCalories";
			this->CheckBox_EmfpehlungCalories->UseVisualStyleBackColor = true;
			this->CheckBox_EmfpehlungCalories->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::CheckBox_EmpfehlungCalories_CheckedChanged);
			// 
			// Button_vor
			// 
			this->Button_vor->Location = System::Drawing::Point(457, 7);
			this->Button_vor->Margin = System::Windows::Forms::Padding(1);
			this->Button_vor->Name = L"Button_vor";
			this->Button_vor->Size = System::Drawing::Size(75, 27);
			this->Button_vor->TabIndex = 6;
			this->Button_vor->Text = L"vor";
			this->Button_vor->UseVisualStyleBackColor = true;
			this->Button_vor->Click += gcnew System::EventHandler(this, &ChartForm::Button_vor_Click);
			// 
			// Button_zurueck
			// 
			this->Button_zurueck->Location = System::Drawing::Point(7, 7);
			this->Button_zurueck->Margin = System::Windows::Forms::Padding(1);
			this->Button_zurueck->Name = L"Button_zurueck";
			this->Button_zurueck->Size = System::Drawing::Size(75, 27);
			this->Button_zurueck->TabIndex = 7;
			this->Button_zurueck->Text = L"zurück";
			this->Button_zurueck->UseVisualStyleBackColor = true;
			this->Button_zurueck->Click += gcnew System::EventHandler(this, &ChartForm::Button_zurueck_Click);
			// 
			// ChartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(634, 397);
			this->Controls->Add(this->Button_zurueck);
			this->Controls->Add(this->Button_vor);
			this->Controls->Add(this->CheckBox_EmfpehlungCalories);
			this->Controls->Add(this->CheckBox_EmpfehlungWater);
			this->Controls->Add(this->CheckBox_Calories);
			this->Controls->Add(this->CheckBox_Water);
			this->Controls->Add(this->Chart_Verlauf);
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"ChartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChartForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart_Verlauf))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//private: System::Void Button_Show_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void showDiagramm(std::string artSTD);
		private: System::Void showEmpfehlung(std::string artSTD);
		private: System::Void CheckBox_Water_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void CheckBox_Calories_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void CheckBox_EmpfehlungCalories_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void CheckBox_EmpfehlungWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Button_zurueck_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Button_vor_Click(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
};
}


