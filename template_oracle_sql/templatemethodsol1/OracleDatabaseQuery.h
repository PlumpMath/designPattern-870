#pragma once

class OracleDb
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
