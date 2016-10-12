#pragma once
#include"AbstractStates.h"
class UPStates : public abstractStates
{
	OtherFactor * ofactor;
public:
	void Cal_tax(OtherFactor * ofactor);

};
