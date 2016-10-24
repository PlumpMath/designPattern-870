#include "slider.h"
#include"iostream"

void Slider::setValue(int val)
{
	if (this->value != val)
	{
		this->value = val;
		bgraph->changeGraph(value);
		tgraph->changeGraph(value);
		editBox->changeValue(value);
	}
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

void Slider::setBurnGraph(GraphBurn * bgraph)
{
	this->bgraph = bgraph;
}

void Slider::setBurnThrust(Graphthrust * tgraph)
{
	this->tgraph = tgraph;
}

void Slider::setEditBox(EditBox * editBox)
{
	this->editBox = editBox;
}



