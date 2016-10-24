#include "Dinner.h"

void Dinner::addItem(MenuItem menuitem)
{
	this->vec.push_back(menuitem);
	std::cout << "\nItem added in Dinner menu";
}

void Dinner::traverse()
{
	for (std::vector<MenuItem>::iterator itr = vec.begin()  ; itr != vec.end(); ++itr)
	{
		itr->printdetails();
	}
}
