#pragma once

#include"AbstractClass.h"

class Tricache : public AbstractCache
{
	void addItem(std::string key, int value);
	int getItem(std::string);
};

