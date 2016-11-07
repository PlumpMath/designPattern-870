#pragma once
#include<map>
#include<iostream>
class AbstractCache
{
public:

	std::map<std::string,int> item;
	
	virtual void addItem(std::string key,int value )=0;
	virtual int getItem(std::string)=0;

};