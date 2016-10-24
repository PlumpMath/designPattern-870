#include "graphBurn.h"
#include"iostream"

GraphBurn::GraphBurn(Mediator * mediator)
{
	this->mediator = mediator;
}

void GraphBurn::setValue(int val)
{
	mediator->notify(val);
}

int GraphBurn::getValue()
{
	return value;
}

void GraphBurn::changeGraph(int value)
{
	this->value = value;
	std::cout << "\nGraph value has chnaged for burn with "<<value;
}

