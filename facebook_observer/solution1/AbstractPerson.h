#pragma once
#include"iostream"
class AbstractPerson
{
	std::string name;
	std::string address;
	std::string emailId;
public:
	virtual std::string getName();
	virtual void Display(std::string) {}
	virtual std::string getAddress();
	virtual std::string getEmailId();
	virtual void setName(std::string);
	virtual void setAddress(std::string);
	virtual void setEmailId(std::string);
};