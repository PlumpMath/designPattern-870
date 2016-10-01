#include"iostream"
#include"Coffee.h"


void coffee::blewCoffee() {
	std::cout << "Steeping tea\n";
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