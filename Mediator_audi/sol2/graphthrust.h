#pragma once
#include"AbstractGraph.h"
#include"Mediator.h"


class Graphthrust : public AbstractGraph
{

	Mediator *mediator;
	int value=0;
public:
	void setValue(int val);
	Graphthrust(Mediator *mediator);
	int getValue();
	void changeGraph(int value);

};
	


