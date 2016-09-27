#include"iostream"
#include"tea.h"
#include"coffee.h"
#include"stdio.h"
class Driver
{
public:
	void PressButton(int a);
};

void Driver::PressButton(int a)
{
	switch (a)
	{
	case 1: tea t;
		t.makeTea();
		break;
	case 2: coffee c;
		c.makeCoffee();
		break;
	default:
		std::cout << "Not correct choice";
	}
}

int main()
{
	Driver d;
	d.PressButton(1);
	std::cout << "Done tea"<<std::endl;
	d.PressButton(2);
	getchar();

}