#pragma once

ref class Uebung {
private:
	System::String^ beschreibung;
	System::String^ dauer;
public:
	System::String^ getBeschreibung();
	void setBeschreibung(System::String^ newBeschreibung);
	System::String^ getDauer();
	void setDauer(System::String^ newDauer);

};