#include "editBox.h"
#include"iostream"


EditBox::EditBox(Mediator * mediator)
{
	this->mediator = mediator;
}

void EditBox::setValue(int val)
{
	mediator->notify(val);
}


int EditBox::getValue()
{
	return value;
}


void EditBox::changeValue(int value)
{
	this->value = value;
	std::cout << "\nEdit box value has changed with value =  "<<value;
}
