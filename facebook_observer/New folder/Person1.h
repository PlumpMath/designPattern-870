#pragma once
#include"AbstractPerson.h"
#include"Driver.h"
#include"iostream"

class Person1 : public AbstractPerson
{
	std::string name;
	std::string address;
	std::string emailId;
public:
	Person1(){}
	Person1(std::string, std::string, std::string);

	 std::string getName();
	 std::string getAddress();
	 std::string getEmailId();
	 void setName(std::string);
	 void setAddress(std::string);
	 void setEmailId(std::string);
	 void WriteOnWall(std::string, Driver *group);
	 void Display(std::string str);
};

