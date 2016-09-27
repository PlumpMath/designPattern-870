#include"iostream"
#include"tea.h"
#include"Header.h"


void tea::steepTea() {
	std::cout << "Steeping tea\n";
}

void tea::addLemon() {
	std::cout << "Adding lemon\n";
}

void tea::makeTea()
{

	boilWater();
	steepTea();
	pour();
	addLemon();
}