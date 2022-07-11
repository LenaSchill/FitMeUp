#pragma once
#include <iostream>

using namespace std;

class ErrorMessage
{
public:
    ErrorMessage();
    //Datenbank (Fehler-)Meldungen
    const string DATABASE_FAILED_TO_OPEN = "Die Datenbankverbindung konnte nicht geöffnet werden!";
    const string DATABASE_FAILED_TO_READ = "Der Eintrag konnte nicht aus der Datenbank gelesen werden.";
    const string DATABASE_FAILED_TO_WRITE = "Es konnte nicht in die Datenbank geschrieben werden.";
    const string DATABASE_FAILED_TO_DELETE = "Der Eintrag konnte nicht aus der Datenbank gelöscht werden.";

    //Kunden (Fehler-)Meldungen
    const string CUSTOMER_NOT_EXISTS = "Der Kunde existiert nicht!";
    const string CUSTOMER_ALREADY_EXISTS = "Dieser Nickname ist bereits vergeben!";
    const string CUSTOMER_LOGIN_FAILED = "Der Nickname und/oder das Passwort sind falsch. Bitte versuchen Sie es erneut!";

    //Zielsetzung (Fehler-)Meldungen
    const string CUSTOMERGOAL_NOT_EXISTS = "Die Zielsetzung existiert nicht!";
    const string GOAL_NOT_FOUND = "Leider konnte die Zielsetzung nicht gefunden werden";
    const string GOAL_IS_EMPTY = "Die Zielsetzung ist leer.";

};
