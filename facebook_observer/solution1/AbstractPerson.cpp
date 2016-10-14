#include"AbstractPerson.h"

std::string AbstractPerson::getName()
{
	return name;
}

std::string AbstractPerson::getAddress()
{
	return address;
}

std::string AbstractPerson::getEmailId()
{
	return emailId;
}

void AbstractPerson::setName(std::string name)
{
	this->name = name;
}

void AbstractPerson::setAddress(std::string)
{
	this->address = address;
}

void AbstractPerson::setEmailId(std::string)
{
	this->emailId = emailId;
}
