#include "Person3.h"

Person3::Person3(std::string name, std::string address, std::string email)
{
	this->setName(name);
	this->setAddress(address);
	this->setEmailId(email);

}

std::string Person3::getName()
{
	return name;
}

std::string Person3::getAddress()
{
	return address;
}

std::string Person3::getEmailId()
{
	return emailId;
}

void Person3::setName(std::string name)
{
	this->name = name;
}

void Person3::setAddress(std::string)
{
	this->address = address;
}

void Person3::setEmailId(std::string)
{
	this->emailId = emailId;
}

void Person3::WriteOnWall(std::string str, Driver *group)
{
	group->NotifyAll(str);
}

void Person3::Display(std::string str)
{
	std::cout <<" "<< str.c_str() << " on " <<this->getName().c_str()<<std::endl;
}

