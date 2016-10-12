#include "OracleDatabaseQuery.h"
#include"iostream"

void OracleDb::formatCommand()
{
	std::cout << "formatCommand done for oracle\n";
}

void OracleDb::sendSelectCommand()
{
	std::cout << "Sent select command to oracle\n";
}

void OracleDb::returnDataSet()
{
	std::cout << "return dataset for oracle\n";
}

void OracleDb::queryDB()
{
	formatCommand();
	sendCommand();
	formatSelectCommand();
	sendSelectCommand();
	returnDataSet();
}

void OracleDb::sendCommand()
{
	std::cout << "Sent command to database for oracle\n";
}

void OracleDb::formatSelectCommand()
{
	std::cout << "Format select command for oracle \n";
}
