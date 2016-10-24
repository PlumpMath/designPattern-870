#pragma once
#include"AbstractGraph.h"
#include"Mediator.h"

class Mediator;
class GraphBurn :public AbstractGraph
{

	Mediator *mediator;
	int value=0;
public:
	GraphBurn(Mediator *mediator);
	void setValue(int val);
	int getValue();
	void changeGraph(int value);

};



