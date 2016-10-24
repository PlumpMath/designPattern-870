#pragma once
#include"editBox.h"
#include"graphBurn.h"
#include"graphthrust.h"
class EditBox;
class Graphthrust;
class GraphBurn;


class Slider
{
	GraphBurn *bgraph;
	Graphthrust *tgraph;
	EditBox *editBox;
	int value=0;
public:
	void setBurnGraph(GraphBurn *bgraph);
	void setBurnThrust(Graphthrust *tgraph);
	void setEditBox(EditBox *editBox);
	void setValue(int val);
	int   getValue();
	void changeValue(int value);
};
