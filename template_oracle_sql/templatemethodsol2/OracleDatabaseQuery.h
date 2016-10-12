#pragma once
#include "maintainQuery.h"

class OracleDb : public MaintainQuery
{
private:
	void formatCommand();
	void formatSelectCommand();

};
