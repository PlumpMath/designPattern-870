#pragma once

class SQLDb
{
private:
	void formatCommand();
	void sendCommand();
	void formatSelectCommand();
	void sendSelectCommand();
	void returnDataSet();
public:
	void queryDB();
};
