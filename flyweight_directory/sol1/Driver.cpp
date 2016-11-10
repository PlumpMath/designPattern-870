
#include"stdio.h"
#include"vector"
#include"Folder.h"
#include"File.h"
#include"Pdf.h"

Icons* getIcon(int i)
{
	if (i % 3 == 0)
		return new Folder();
	else if (i % 3 == 1)
		return new File();
	else
		return new Pdf();

}


int main()
{
	//think that dialog box as vector of icons

	Icons* DialogIcons[20];

	for (int i = 0; i < 20; i++)
	{
		DialogIcons[i] = getIcon(i);
	}

	for (int i = 0; i < 20; i++)
	{
		std::cout << "DialogIcons[i] = " << DialogIcons[i]->getDes().c_str()<<std::endl;
	}



	getchar();
	return 0;

}