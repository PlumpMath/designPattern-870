#include "Flyweight.h"

Icons * Flyweight::getIcon(int i)
{
	std::map<int, Icons*>::iterator it;
	 it=icon.find(i % 3);

	 return it->second;
}
