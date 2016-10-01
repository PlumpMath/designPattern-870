#pragma once
#include"MakeReceipe.h"
class coffee:public MakeRec
{
private:
	
	void SteepProcess();
	void AddReceipe();
public:
	coffee(bool f) :MakeRec(f)
	{

	}
	
};
