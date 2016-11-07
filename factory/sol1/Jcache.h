#pragma once
#include"AbstractClass.h"

class Jcache : public AbstractCache
{
	void addItem(std::string key, int value);
	int getItem(std::string);
};
