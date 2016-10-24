#pragma once
#include"menuItem.h"
#define no_items 10

class Breakfast
{
	
	MenuItem menuitem[no_items];
	int total_item;
	
public:
	Breakfast();
	void addItem(MenuItem menuitem);
	//void deleteItem(MenuItem *menuitem);
	void traverse();
};
