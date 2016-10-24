#include "graphthrust.h"
#include"iostream"

void Graphthrust::setValue(int val)
{
	mediator->notify(val);
}

Graphthrust::Graphthrust(Mediator * mediator)
{ 
	this->mediator = mediator;
}


int Graphthrust::getValue()
{
	return value;
}


void Graphthrust::changeGraph(int value)
{
	this->value = value;
	std::cout << "\nGraph value has chnaged for thrust with value "<<value;
}



