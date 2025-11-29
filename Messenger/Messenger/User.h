#pragma once
#include <string>

class User
{
public:
	int id;
	std::string firstName;
	std::string lastName;
	std::string phone;
	std::string birthdate;
	std::string avatar;
	std::string status;

	static void showAll();
	static void createUser();
};

