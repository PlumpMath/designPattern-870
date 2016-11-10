#pragma once
#include"Folder.h"
#include"File.h"
#include"Pdf.h"
#include"map"
#include"iostream"

class Flyweight
{
	std::map<int, Icons*> icon;
public:
	Flyweight()
	{
		icon.insert(std::pair<int, Icons*>(0, new Folder()));
		icon.insert(std::pair<int, Icons*>(1, new File()));
		icon.insert(std::pair<int, Icons*>(2, new Pdf()));
	}

	Icons *getIcon(int i);
	
};
