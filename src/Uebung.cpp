#include "Uebung.h"

System::String^ Uebung::getBeschreibung() {
	return beschreibung;
}

void Uebung::setBeschreibung(System::String^ newBeschreibung) {
	beschreibung = newBeschreibung;
}

System::String^ Uebung::getDauer() {
	return dauer;
}

void Uebung::setDauer(System::String^ newDauer) {
	dauer = newDauer;
}