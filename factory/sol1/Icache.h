#pragma once

#include"AbstractClass.h"

class Icache : public AbstractCache
{
	void addItem(std::string key, int value);
	int getItem(std::string);
};

