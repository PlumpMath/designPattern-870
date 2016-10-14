#pragma once
#include"iostream"
#include"AbstractPerson.h"
#include"vector"


class Driver
{
	std::vector<AbstractPerson *> vec;
public:
	
	void leave(AbstractPerson *p);
	void attach(AbstractPerson *p);
	void NotifyAll(std::string str);
};
