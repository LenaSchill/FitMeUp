#pragma once
#include "DB_Response.h"


ref class Challenge {
private:
	DB_Response db;
	DB_Response db2;
	System::String^ cid;
	System::String^ beschreibung;
	int dauer;
	int lastDate;
	int startDate;

public:
	Challenge();

	System::Collections::Generic::List<Challenge^>^ challengeGenerieren();
	void challengeEintragen(System::String^ beschreibung, System::String^ uid, System::String^ time);
	void Challenge::challengesSpeichern();
	void challengeUeberpruefen();
	void datumUpdaten(System::String^ cid, System::String^ uid);
	System::Collections::Generic::List<System::String^>^ Challenge::abgeschlosseneHolen();

	void setBeschreibung(System::String^ newBeschreibung);
	void setCid(System::String^ newCid);
	void setDauer(int newDauer);
	void setLastDate(int newDate);
	void setStartDate(int newDate);

	System::String^ getCid();
	System::String^ getBeschreibung();
	int getDauer();
	int getLastDate();
	int getStartDate();
};