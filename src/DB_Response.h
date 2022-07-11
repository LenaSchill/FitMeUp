#pragma once

#include <mysql.h>
#include <iostream>
//MODEL

ref class DB_Response {
public:
	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;

	char* const ip{ "194.95.108.155" };
	char* const dbUsername{ "root" };
	char* const dbPassword{ "root" };
	char* const dbName{ "FitMeUp" };
	int const port{ 3306 };
	char* const unixSocket{ NULL };
	int const clientFlag{ 0 };

	void ConnectionFunction();
	std::string sqlAbfrage(std::string query);
};