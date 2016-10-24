#pragma once
#include"AbstractGraph.h"
#include"editBox.h"
#include"slider.h"
#include"graphBurn.h"
class EditBox;
class GraphBurn;
class Slider;

class Graphthrust : public AbstractGraph
{
	GraphBurn *bgraph;
	Slider *slider;
	EditBox *editBox;
	int value=0;
public:
	void setValue(int val);
	int getValue();
	void changeGraph(int value);
	void setBurnGraph(GraphBurn *bgraph);
	void setSlider(Slider *slider);
	void setEditBox(EditBox *editBox);
};
	


