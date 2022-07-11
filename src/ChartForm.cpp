#include "ChartForm.h"
#include "Hilfsfunktionen.h"

using namespace Loginsystem;

//Show Diagramms, where the CheckBox is checked
System::Void ChartForm::CheckBox_Water_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Chart_Verlauf->Series["Water"]->Points->Clear();
	if (CheckBox_Water->Checked == true) {
		showDiagramm("Water");
	}
}
System::Void ChartForm::CheckBox_Calories_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Chart_Verlauf->Series["Calories"]->Points->Clear();
	if (CheckBox_Calories->Checked == true) {
		showDiagramm("Calories");
	}
}
System::Void ChartForm::CheckBox_EmpfehlungCalories_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Chart_Verlauf->Series["EmpfehlungCalories"]->Points->Clear();
	if (CheckBox_EmfpehlungCalories->Checked == true) {
		showEmpfehlung("EmpfehlungCalories");
	}
}
System::Void ChartForm::CheckBox_EmpfehlungWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Chart_Verlauf->Series["EmpfehlungWater"]->Points->Clear();
	if (CheckBox_EmpfehlungWater->Checked == true) {
		showEmpfehlung("EmpfehlungWater");
	}
}

//fetch Data from Database and show them in diagramm
System::Void ChartForm::showDiagramm(std::string artSTD) {
	DB_Response db;
	db.ConnectionFunction();

	Nutzerprofil profil;
	std::string uid = msclr::interop::marshal_as<std::string>(profil.getUid());

	int date = getDate();
	std::string arrayDates[7];
	int amount = 0;

	//startDate of the week
	for (int i = 0; i < woche; i++) {
		for (int i = 0; i < 7; i++) {
			date = getDayBefore(date);
		}
	}
	//showing the data from this week
	for (int i = 0; i < 7; i++) {
		std::string dateSTD = std::to_string(date);
		arrayDates[i] = dateSTD;
		date = getDayBefore(date);
	}
	for(int i=6; i>=0; i--){
		std::string sql_query = "SELECT Amount FROM " + artSTD + " WHERE UserID = " + uid + " AND Timestamp = " + arrayDates[i] + "; ";
		const char* q1 = sql_query.c_str();
		db.qstate = mysql_query(db.conn, q1);
		db.res = mysql_store_result(db.conn);
		while (db.row = mysql_fetch_row(db.res)) {
			amount = atoi(db.row[0]);
		}
		System::String^ date = gcnew System::String(arrayDates[i].c_str());
		System::String^ art = gcnew System::String(artSTD.c_str());
		Chart_Verlauf->Series[art]->Points->AddXY(date, amount);
		amount = 0;
	}

}

//fetch recommendation and show it in diagramm
System::Void ChartForm::showEmpfehlung(std::string artSTD) {
	Nutzerprofil profil;
	double empfehlung = -1;
	if (artSTD == "EmpfehlungWater") {
		profil.wasserEmpfehlungAktualisieren();
		empfehlung = profil.getWasserempfehlung() * 1000;
	}
	else if (artSTD == "EmpfehlungCalories") {
		profil.kalorienEmpfehlungAktualisieren();
		empfehlung = profil.getKalorienempfehlung();
	}

	int aktDate = getDate();
	for (int i = 6; i >= 0; i--) {
		std::string dateSTD = std::to_string(aktDate - i);
		System::String^ date = gcnew System::String(dateSTD.c_str());
		System::String^ art = gcnew System::String(artSTD.c_str());
		Chart_Verlauf->Series[art]->Points->AddXY(date, empfehlung);
	}
}


//show an other week
System::Void ChartForm::Button_zurueck_Click(System::Object^ sender, System::EventArgs^ e) {
	woche = woche + 1;
	Button_vor->Show();
	CheckBox_Water_CheckedChanged(CheckBox_Water, nullptr);
	CheckBox_Calories_CheckedChanged(CheckBox_Calories, nullptr);
	CheckBox_EmpfehlungWater_CheckedChanged(CheckBox_EmpfehlungWater, nullptr);
	CheckBox_EmpfehlungCalories_CheckedChanged(CheckBox_EmfpehlungCalories, nullptr);
}

System::Void ChartForm::Button_vor_Click(System::Object^ sender, System::EventArgs^ e) {
	woche = woche - 1;
	if (woche <= 0) {
		Button_vor->Hide();
	}
	CheckBox_Water_CheckedChanged(CheckBox_Water, nullptr);
	CheckBox_Calories_CheckedChanged(CheckBox_Calories, nullptr);
	CheckBox_EmpfehlungWater_CheckedChanged(CheckBox_EmpfehlungWater, nullptr);
	CheckBox_EmpfehlungCalories_CheckedChanged(CheckBox_EmfpehlungCalories, nullptr);
}

