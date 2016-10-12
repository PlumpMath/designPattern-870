#pragma once

#include"iostream"
#include"otherFactors.h"

class abstractStates
{
	OtherFactor * ofactor;
public:
	virtual void Cal_tax(OtherFactor * ofactor) = 0;
};
