#pragma once
#include"otherFactors.h"

class OtherFactorImpl : public OtherFactor
{
	int maintainance=10;
	int state_tax=20;
public:
	int getMaintainance();
	void setMaintainance(int);
	int getStateTax();
	void setStateTax(int);
};

