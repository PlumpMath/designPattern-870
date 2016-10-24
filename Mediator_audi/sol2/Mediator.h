#pragma once

#include"editBox.h"
#include"graphBurn.h"
#include"graphthrust.h"
#include"slider.h"
class EditBox;
class Graphthrust;
class GraphBurn;
class Slider;

class Mediator
{
	EditBox *editbox;
	Graphthrust *groupTrust;
	GraphBurn *groupburn;
	Slider *slider;

public:
	void notify(int val);
	void setEdit(EditBox *editbox);
	void setGroupBurn(GraphBurn *groupburn);
	void setGroupThrust(Graphthrust *groupTrust);
	void setSlider(Slider *slider);


};
