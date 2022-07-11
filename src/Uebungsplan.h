#pragma once
#include "Uebung.h"
#include "DB_Response.h"

ref class Uebungsplan {
private:
	DB_Response db;
	static System::Collections::Generic::List<Uebung^>^ uebungen = gcnew System::Collections::Generic::List<Uebung^>();
public:
	Uebungsplan();
	System::Collections::Generic::List<Uebung^>^ getUebungen();
	void uebungsplanGenerieren();
};