#include "slider.h"
#include"iostream"

void Slider::setValue(int val)
{
	mediator->notify(val);
}


int Slider::getValue()
{
	return value;
}


void Slider::changeValue(int value)
{
	this->value = value;
	std::cout << "\nGraph value has chnaged for thrust with value "<<value;
}

Slider::Slider(Mediator * mediator)
{
	this->mediator = mediator;
}



