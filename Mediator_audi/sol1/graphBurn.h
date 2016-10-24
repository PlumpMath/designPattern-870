#pragma once
#include"editBox.h"
#include"slider.h"
#include"graphthrust.h"

class EditBox;
class Graphthrust;
class Slider;

class GraphBurn :public AbstractGraph
{
	EditBox *editBox;
	Graphthrust *tgraph;
	Slider *slider;
	int value=0;
public:
	void setValue(int val);
	int getValue();
	void changeGraph(int value);
	void setSlider(Slider *slider);
	void setBurnThrust(Graphthrust *tgraph);
	void setEditBox(EditBox *editBox);
};



