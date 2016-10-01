#pragma once
class MakeRec
{
protected:
	void boilWater();
	void pour();
	virtual void SteepProcess() = 0;
	virtual void AddReceipe() = 0;
public:
	void makeReceipe();
	
};