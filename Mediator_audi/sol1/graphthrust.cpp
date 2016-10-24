#include "graphthrust.h"
#include"iostream"

void Graphthrust::setValue(int val)
{
	if (this->value != val)
	{
		this->value = val;
		bgraph->changeGraph(value);
		slider->changeValue(value);
		editBox->changeValue(value);
	}
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

void Graphthrust::setBurnGraph(GraphBurn * bgraph)
{
	this->bgraph = bgraph;
}

void Graphthrust::setSlider(Slider * slider)
{
	this->slider = slider;
}

void Graphthrust::setEditBox(EditBox * editBox)
{
	this->editBox = editBox;
}

