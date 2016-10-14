#include "Person1.h"

Person1::Person1(std::string name, std::string address, std::string email)
{
	this->setName(name);
	this->setAddress(address);
	this->setEmailId(email);

}

std::string Person1::getName()
{
	return name;
}

std::string Person1::getAddress()
{
	return address;
}

std::string Person1::getEmailId()
{
	return emailId;
}

void Person1::setName(std::string name)
{
	this->name = name;
}

void Person1::setAddress(std::string)
{
	this->address = address;
}

void Person1::setEmailId(std::string)
{
	this->emailId = emailId;
}

void Person1::WriteOnWall(std::string str, Driver *group)
{
	group->NotifyAll(str);
}

void Person1::Display(std::string str)
{
	std::cout << " " << str.c_str() << " on " << this->getName().c_str() << std::endl;
}

