#include"Factory.h"
#include"stdio.h"


int main()
{
	int size = 200;


	AbstractCache *Acache;
	Factory *fac = new Factory(size);

	Acache=fac->getCache();

	Acache->addItem("Adya", 200);
	Acache->addItem("Nand", 300);
	Acache->addItem("Jha", 400);


	std::cout<<"items are\n" << Acache->getItem("Adya") << std::endl << Acache->getItem("Nand") << std::endl << Acache->getItem("Jha") << std::endl;


	getchar();
	return 0;

}