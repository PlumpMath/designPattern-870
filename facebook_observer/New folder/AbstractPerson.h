#pragma once
#include"iostream"
class AbstractPerson
{
public:
	virtual std::string getName() { return "Its main class"; }
	virtual void Display(std::string) {}
};