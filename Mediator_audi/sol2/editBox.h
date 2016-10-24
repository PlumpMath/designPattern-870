#pragma once
#include"AbstractGraph.h"
#include"Mediator.h"
class Mediator;
class EditBox : public AbstractGraph
{
	Mediator *mediator;

	int value=0;
public:
	EditBox(Mediator *mediator);
	void setValue(int val);
	int   getValue();
	void changeValue(int value);
};
