#pragma once
#include <iostream>
#include "DB_Response.h"
#include "Nutzerprofil.h"

ref class LogicLoginsystem {
private:
	DB_Response db;
	Nutzerprofil^ profil = gcnew Nutzerprofil();
	Challenge^ c = gcnew Challenge();
public:
	LogicLoginsystem();
	std::string login(std::string username, std::string password);
	void registr(std::string lastname, std::string firstname, std::string date, int height, int weight, char gender, std::string ziel, std::string bewegungsgruppe, std::string username, std::string password);
	bool strongness(std::string& input); 
	bool userExists(std::string username, std::string uid); 
	void update(std::string lastname, std::string firstname, int height, int weight, std::string ziel, std::string bewegungsgruppe, std::string username, std::string password);
};


	