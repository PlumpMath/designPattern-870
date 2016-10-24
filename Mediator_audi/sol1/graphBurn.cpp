#include "graphBurn.h"
#include"iostream"

void GraphBurn::setValue(int val)
{
	if (this->value != val)
	{
		this->value = val;
		slider->changeValue(value);
		tgraph->changeGraph(value);
		editBox->changeValue(value);
	}

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
void GraphBurn::setSlider(Slider *slider)
{
	this->slider = slider;
}

void GraphBurn::setBurnThrust(Graphthrust * tgraph)
{
	this->tgraph = tgraph;
}

void GraphBurn::setEditBox(EditBox * editBox)
{
	this->editBox = editBox;
}
