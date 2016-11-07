#include"Factory.h"

Factory::Factory(int size) {
	this->size = size;
}

AbstractCache * Factory::getCache()
{
	if (size > 0 && size < 100)
		Acache = new Icache();
	else if (size > 100 && size < 150)
		Acache = new Jcache();
	else
		Acache = new Tricache();

	return Acache;
}