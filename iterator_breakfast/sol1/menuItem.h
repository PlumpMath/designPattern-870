#pragma once
#include"iostream"

class MenuItem
{
	std::string name;
	int price;

public:
	void setName(std::string);
	void setPrice(int value);
	void printdetails();
};
