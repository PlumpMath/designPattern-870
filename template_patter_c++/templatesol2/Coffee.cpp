#include"iostream"
#include"coffee1.h"


void coffee::blewCoffee() {
	std::cout << "Blewing tea\n";
}

void coffee::addSugarAndMilk() {
	std::cout << "Adding lemon\n";
}

void coffee::makeCoffee()
{

	boilWater();
	blewCoffee();
	pour();
	addSugarAndMilk();
}