#pragma once
#include"slider.h"
#include"graphBurn.h"
#include"graphthrust.h"
class Slider;
class GraphBurn;
class Graphthrust;

class EditBox
{
	GraphBurn *bgraph;
	Graphthrust *tgraph;
	Slider *slider;

	int value=0;
public:
	void setBurnGraph(GraphBurn *bgraph);
	void setBurnThrust(Graphthrust *tgraph);
	void setSlider(Slider *slider);
	void setValue(int val);
	int   getValue();
	void changeValue(int value);
};
