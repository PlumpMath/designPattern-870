
#include"iostream"
#include "UP.h"

void UPStates::Cal_tax(OtherFactor * ofactor)
{
	std::cout << "UP tax claculated .Maintance = " << ofactor->getMaintainance() << "Tax = " << ofactor->getStateTax();
}