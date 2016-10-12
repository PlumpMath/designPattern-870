#include "maintainQuery.h"
#include"iostream"

void MaintainQuery::sendCommand()
{
	std::cout << "Sent command \n";
}

void MaintainQuery::sendSelectCommand()
{
	std::cout << "Sent select command to \n";
}

void MaintainQuery::returnDataSet()
{
	std::cout << "return dataset \n";
}

void MaintainQuery::queryDB()
{
	formatCommand();
	sendCommand();
	formatSelectCommand();
	sendSelectCommand();
	returnDataSet();
}
