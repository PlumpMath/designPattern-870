#pragma once
class MakeRec
{
	bool flag;
protected:
	void boilWater();
	void pour();
	virtual void SteepProcess() = 0;
	virtual void AddReceipe() = 0;
public:
	
	void makeReceipe();
	MakeRec(bool f)
	{
		flag = f;
	}
	
};