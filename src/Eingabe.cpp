#include "Eingabe.h"
#include "Nutzerprofil.h"
#include "Hilfsfunktionen.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>

Eingabe::Eingabe() {
    db.ConnectionFunction();
}

// Input of calories and water
void Eingabe::werteEingeben(std::string x, System::String^ uid, std::string eingabeart) {
    int date = 0;
    System::String^ a = gcnew System::String(x.c_str());

    //search date of last entry
    std::string uidSTD = msclr::interop::marshal_as<std::string>(uid);
    std::string select_query = "SELECT MAX(Timestamp) FROM " + eingabeart + " WHERE UserID = '" + uidSTD + "'; ";
    const char* q1 = select_query.c_str();
    db.qstate = mysql_query(db.conn, q1);
    db.res = mysql_store_result(db.conn);
    while (db.row = mysql_fetch_row(db.res)) {
        if (db.row[0] != NULL) {
            date = atoi(db.row[0]);
        }
    }
    //values already entered today
    if (date == getDate()) {
        // Add x to current database entry
        db.sqlAbfrage("UPDATE " + eingabeart + " SET Amount = Amount + '" + x + "' WHERE UserID = '" + uidSTD + "';");
    }
    //no values entered today
    else {
        //Insert a new entry into the database
        date = getDate();
        std::string dateString = std::to_string(date);
        db.sqlAbfrage("INSERT INTO " + eingabeart + " (UserID, Amount, Timestamp) VALUES(" + uidSTD + ", " + x + ", " + dateString + "); ");
    }
}



//Get the current water value/calorie value
int Eingabe::getAktWert(std::string eingabeart, std::string date) {

    Nutzerprofil nutzer;
    std::string uidSTD = msclr::interop::marshal_as<std::string>(nutzer.getUid());

    std::string select_query = "SELECT Amount FROM " + eingabeart + " WHERE UserId = '" + uidSTD + "' AND Timestamp = '" + date + "'; ";
    const char* q = select_query.c_str();
    db.qstate = mysql_query(db.conn, q);
    db.res = mysql_store_result(db.conn);
    while (db.row = mysql_fetch_row(db.res)) {
        if (db.row[0] != NULL) {
            if (mysql_num_fields(db.res) == 1) {
                 return atoi(db.row[0]);
            }
            else {
                return 0;
             }
        }

    }
}



//Input of sport
void Training::werteEingeben(std::string x, System::String^ uid, std::string trainingsart) {
    int date = 0;
    Nutzerprofil^ profil = gcnew Nutzerprofil();

    std::string uidSTD = msclr::interop::marshal_as<std::string>(uid);

    //search date of last entry
    std::string select_query = "SELECT MAX(Timestamp) FROM Trainingseinheit WHERE UserID = " + uidSTD + "; ";
    const char* q1 = select_query.c_str();
    db.qstate = mysql_query(db.conn, q1);
    db.res = mysql_store_result(db.conn);
    while (db.row = mysql_fetch_row(db.res)) {
        if (db.row[0] != NULL) {
            date = atoi(db.row[0]);
        }
    }

    //search id und calories per minute
    std::string tid;
    std::string verbrauch;
    select_query = "SELECT Tid, MET FROM trainingsart WHERE Beschreibung = '"+ trainingsart +"'; ";
    q1 = select_query.c_str();
    db.qstate = mysql_query(db.conn, q1);
    db.res = mysql_store_result(db.conn);

    db.row = mysql_fetch_row(db.res);
    if (db.row != nullptr) {
        tid = db.row[0];
        int v = atoi(db.row[1]) * std::stof(x) * profil->getGewicht() * 0.0175;
        verbrauch = std::to_string(v);
    }

    //values already entered today
    if (date == getDate()) {
        std::string dateString = std::to_string(date);
        select_query = "SELECT Tid FROM Trainingseinheit WHERE Timestamp = '" + dateString + "' AND UserId =" + uidSTD + "; ";
        q1 = select_query.c_str();
        db.qstate = mysql_query(db.conn, q1);
        db.res = mysql_store_result(db.conn);
        while (db.row = mysql_fetch_row(db.res)) {
            if (db.row[0] != NULL) {
                 //this sport already entered today
                  if (tid == db.row[0]) {
                        //  Add x to current database entry
                        db.sqlAbfrage("UPDATE trainingseinheit SET Dauer = Dauer + " + x + ",  Kcal_Pro_Einheit = Kcal_Pro_Einheit + " + verbrauch + " WHERE UserID = '" + uidSTD + "' AND Timestamp = '" + dateString + "'AND Tid = " + tid + "; ");
                        break;
                   }
            }

        }
    }
    //this sport has not yet been made today
    date = getDate();
    std::string dateString = std::to_string(date);
     db.sqlAbfrage("INSERT INTO Trainingseinheit (UserID, Dauer, Timestamp, Tid, Kcal_Pro_Einheit) VALUES(" + uidSTD + ", " + x + ", " + dateString + ", " + tid + ", " + verbrauch + "); ");
}



//Get the current value (burned calories/dauer (of a special practice))
float Training::getAktWert(std::string date, std::string wert, std::string uebung) {

    Nutzerprofil nutzer;

    float gesamt = 0;
    std::string uidSTD = msclr::interop::marshal_as<std::string>(nutzer.getUid());
    std::string select_query;

    //total duration/burned calories today
    if (uebung == "all") {
        //search value
        select_query = "SELECT " + wert + " FROM Trainingseinheit WHERE UserId = '" + uidSTD + "' AND Timestamp = '" + date + "'; ";
    }

    //duration/burned caloris of a special practice
    else {
        //search id of practice
        std::string tid;
        select_query = "SELECT Tid FROM Trainingsart WHERE Beschreibung = '" + uebung + "';";
        const char* q = select_query.c_str();
        db.qstate = mysql_query(db.conn, q);
        db.res = mysql_store_result(db.conn);
        while (db.row = mysql_fetch_row(db.res)) {
            if (db.row[0] != NULL) { 
                tid = db.row[0];
            }
           
        }
        //search value
        select_query = "SELECT " + wert + " FROM Trainingseinheit WHERE UserId = '" + uidSTD + "' AND Timestamp = '" + date + "' AND Tid = " + tid + "; ";
    }

    //addition of result-values
    const char* q = select_query.c_str();
    db.qstate = mysql_query(db.conn, q);
    db.res = mysql_store_result(db.conn);
    while (db.row = mysql_fetch_row(db.res)) {
        if (db.row[0] != NULL) {
            gesamt += std::stof(db.row[0]);
        }
    }
    return gesamt;
}

