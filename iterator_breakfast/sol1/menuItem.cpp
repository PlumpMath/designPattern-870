#include "menuItem.h"

void MenuItem::setName(std::string name)
{
	this->name = name;
}

void MenuItem::setPrice(int value)
{
	this->price = value;
}

void MenuItem::printdetails()
{
	std::cout << "\nitem = "<<name.c_str()<<" Cost = "<<this->price;
}
