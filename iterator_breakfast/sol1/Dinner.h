#pragma once
#include"menuItem.h"
#include<iostream>
#include<vector>

class Dinner
{
	std::vector<MenuItem> vec;
	int total_item;

public:
	
	void addItem(MenuItem menuitem);
	//void deleteItem(MenuItem *menuitem);
	void traverse();
};

