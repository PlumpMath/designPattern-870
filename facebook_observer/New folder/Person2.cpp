#include "Person2.h"

Person2::Person2(std::string name, std::string address, std::string email)
{
	this->setName(name);
	this->setAddress(address);
	this->setEmailId(email);

}

std::string Person2::getName()
{
	return name;
}

std::string Person2::getAddress()
{
	return address;
}

std::string Person2::getEmailId()
{
	return emailId;
}

void Person2::setName(std::string name)
{
	this->name = name;
}

void Person2::setAddress(std::string)
{
	this->address = address;
}

void Person2::setEmailId(std::string)
{
	this->emailId = emailId;
}

void Person2::WriteOnWall(std::string str, Driver *group)
{
	group->NotifyAll(str);
}

void Person2::Display(std::string str)
{
	std::cout << " " << str.c_str() << " on " << this->getName().c_str() << std::endl;
}

