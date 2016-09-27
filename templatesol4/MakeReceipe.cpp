#include"iostream"
#include"MakeReceipe.h"


void MakeRec::boilWater()
	{
		std::cout << "Boiling water\n";
	}
void MakeRec::pour()
	{
		std::cout << "puring milk to cup\n";
	}
void MakeRec::makeReceipe()
{

	boilWater();
	SteepProcess();
	pour();
	if(flag)
	AddReceipe();
}
