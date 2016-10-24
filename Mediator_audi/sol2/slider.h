#pragma once
#include"AbstractGraph.h"
#include"Mediator.h"

class Slider:public AbstractGraph
{

	Mediator *mediator;
	int value=0;
public:
	Slider(Mediator *mediator);
	void setValue(int val);
	int   getValue();
	void changeValue(int value);
};
