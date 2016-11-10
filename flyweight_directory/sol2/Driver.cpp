#include"stdio.h"
#include"vector"
#include"Flyweight.h"

int main()
{
	//think that dialog box as vector of icons
	Flyweight flyweight;
	Icons* DialogIcons[20];

	for (int i = 0; i < 20; i++)
	{
		DialogIcons[i] = flyweight.getIcon(i);
	}

	for (int i = 0; i < 20; i++)
	{
		std::cout << "DialogIcons[i] = " << DialogIcons[i]->getDes().c_str()<<std::endl;
	}



	getchar();
	return 0;

}