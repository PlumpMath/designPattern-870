#include"Icache.h"
#include"Jcache.h"
#include"TriCache.h"
#include"stdio.h"

int main()
{
	int size = 200;


	AbstractCache *Acache;

	if (size > 0 && size < 100)
		Acache = new Icache();
	else if (size > 100 && size < 150)
		Acache = new Jcache();
	else
		Acache = new Tricache();

	Acache->addItem("Adya", 200);
	Acache->addItem("Nand", 300);
	Acache->addItem("Jha", 400);


	std::cout << Acache->getItem("Adya") << std::endl << Acache->getItem("Nand") << std::endl << Acache->getItem("Jha") << std::endl;


	getchar();
	return 0;

}