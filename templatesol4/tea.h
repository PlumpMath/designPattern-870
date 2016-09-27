#pragma once
#include"MakeReceipe.h"
class tea : public MakeRec
{
	void SteepProcess();
	void AddReceipe();
	
public:
	tea(bool f) :MakeRec(f)
	{

	}
	
};
