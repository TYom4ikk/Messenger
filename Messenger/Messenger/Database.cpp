#include "Database.h"

mysqlx::Session& Database::get() {
	static mysqlx::Session session("localhost", 33060, "root", "root", "messenger");
	return session;
}