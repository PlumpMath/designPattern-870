#include"SQLServerDatabaseQuery.h"
#include"iostream"

void SQLDb::formatCommand()
{
	std::cout << "formatCommand done for SQL\n";
}

void SQLDb::sendSelectCommand()
{
	std::cout << "Sent select command to SQL\n";
}

void SQLDb::returnDataSet()
{
	std::cout << "return dataset for SQL\n";
}

void SQLDb::queryDB()
{
	formatCommand();
	sendCommand();
	formatSelectCommand();
	sendSelectCommand();
	returnDataSet();
}

void SQLDb::sendCommand()
{
	std::cout << "Sent command to database for SQL\n";
}

void SQLDb::formatSelectCommand()
{
	std::cout << "Format select command for SQL\n ";
}
