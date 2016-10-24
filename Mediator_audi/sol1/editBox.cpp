#include "editBox.h"
#include"iostream"


void EditBox::setBurnGraph(GraphBurn * bgraph)
{
	this->bgraph = bgraph;
}

void EditBox::setBurnThrust(Graphthrust * tgraph)
{
	this->tgraph = tgraph;
}

void EditBox::setSlider(Slider * slider)
{
	this->slider = slider;
}

void EditBox::setValue(int val)
{
	if (this->value != val)
	{
		this->value = val;
		bgraph->changeGraph(value);
		tgraph->changeGraph(value);
		slider->changeValue(value);
	}
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
