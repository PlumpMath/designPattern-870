#pragma once
#include"AbstractPerson.h"
#include"Driver.h"
#include"iostream"

class Person3 : public AbstractPerson
{
	std::string name;
	std::string address;
	std::string emailId;
public:
	Person3(){}
	Person3(std::string, std::string, std::string);

	 std::string getName();
	 std::string getAddress();
	 std::string getEmailId();
	 void setName(std::string);
	 void setAddress(std::string);
	 void setEmailId(std::string);
	 void WriteOnWall(std::string, Driver *group);
	 void Display(std::string str);
};

