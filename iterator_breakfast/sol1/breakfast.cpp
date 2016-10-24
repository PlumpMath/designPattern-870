#include "breakfast.h"

Breakfast::Breakfast()
{
	
	total_item = 0;
	
}

void Breakfast::addItem(MenuItem  menuitem)
{
	if (total_item < no_items) {
		this->menuitem[total_item++] = menuitem;
		std::cout << "\nItem Added in Breakfast menu";
	}
	else
		std::cout << "\nCant add more items";
}

void Breakfast::traverse()
{
	for (int i = 0; i < total_item; i++)
		menuitem[i].printdetails();
}

