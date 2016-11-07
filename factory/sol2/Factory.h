#pragma once

#include"Icache.h"
#include"Jcache.h"
#include"TriCache.h"


class Factory
{
	int size;
	AbstractCache *Acache;
public:
	Factory(int size); 

	AbstractCache * getCache();

};
