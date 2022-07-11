#include "DB_Response.h"
#include <iostream>

//Connects to the database
void DB_Response::ConnectionFunction() {
    conn = mysql_init(0);
    if (conn == NULL) {
        std::cout << "Keine Datenbankinitialisierung möglich";
    }
    conn = mysql_real_connect(conn, ip, dbUsername, dbPassword, dbName, port, unixSocket, clientFlag);
    if (conn == NULL) {
        std::cout << "Error";
    }
}

//function executes a sql query
std::string DB_Response::sqlAbfrage(std::string query) {
    const char* q = query.c_str();
    qstate = mysql_query(conn, q);
    if (!qstate) {
        return "Query erfolgreich";
    }
    else {
        return "Query fehlerhaft";
    }
}

