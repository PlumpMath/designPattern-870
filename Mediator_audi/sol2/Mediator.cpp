#include "Mediator.h"

void Mediator::notify(int val)
{
	editbox->changeValue(val);
	groupburn->changeGraph(val);
	groupTrust->changeGraph(val);
	slider->setValue(val);
}

void Mediator::setEdit(EditBox * editbox)
{
	this->editbox = editbox;
}

void Mediator::setGroupBurn(GraphBurn * groupburn)
{
	this->groupburn = groupburn;
}

void Mediator::setGroupThrust(Graphthrust * groupTrust)
{
	this->groupTrust = groupTrust;
}

void Mediator::setSlider(Slider * slider)
{
	this->slider = slider;
}
