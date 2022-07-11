#pragma once
#include "DB_Response.h"
#include <iostream>

ref class Eingabe {
protected:
    DB_Response db;
public:
    Eingabe();
    int getAktWert(std::string eingabeart, std::string date);
    virtual void werteEingeben(std::string x, System::String^ uid, std::string eingabeart);
};

ref class Training : public Eingabe {
public:
    void werteEingeben(std::string x, System::String^ uid, std::string trainingsart) override;
    float getAktWert(std::string date, std::string wert, std::string uebung);
};