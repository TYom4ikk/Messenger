#include "Database.h"
#include "User.h"
#include <iostream>

void User::showAll() {
	auto& session = Database::get();
	auto users = session.getSchema("messenger").getTable("users")
		.select("*").execute();

	std::cout << "=== USERS ===" << std::endl;
	for (auto row : users) {
		std::cout << row[0] << " | "
			<< std::string(row[1]) << " "
			<< std::string(row[2]) << " | "
			<< std::string(row[3]) << " | "
			<< std::string(row[6]) << " | " << std::endl;
	}
}