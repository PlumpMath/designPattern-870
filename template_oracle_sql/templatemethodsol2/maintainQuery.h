#pragma once
class MaintainQuery
{
protected:
	void sendCommand();
	void sendSelectCommand();
	void returnDataSet();
	virtual void formatCommand() = 0;
	virtual void formatSelectCommand() = 0;
public:
	void queryDB();
	
};
