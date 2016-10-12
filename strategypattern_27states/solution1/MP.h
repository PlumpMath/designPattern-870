#pragma once
#include"AbstractStates.h"
class MPStates : public abstractStates
{
	OtherFactor * ofactor;
public:
	void Cal_tax(OtherFactor * ofactor);

};
