#pragma once
#include "maintainQuery.h"

class SQLDb : public MaintainQuery
{
private:
	void formatCommand();
	void formatSelectCommand();

};
