#include "Icache.h"

void Icache::addItem(std::string key, int value)
{
	item.insert(std::pair<std::string, int>(key, value));
}

int Icache::getItem(std::string str)
{
	std::map<std::string, int>::iterator it;
	it = item.find(str);
	if (it != item.end())
		return (*it).second;
}
