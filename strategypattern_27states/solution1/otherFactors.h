#pragma once
#include"iostream"

class OtherFactor
{
	
public:
	virtual int getMaintainance() = 0;
	virtual void setMaintainance(int)=0;
	virtual int getStateTax()=0;
	virtual void setStateTax(int)=0;
};
