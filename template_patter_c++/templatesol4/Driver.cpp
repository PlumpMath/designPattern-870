#include"iostream"
#include"tea.h"
#include"coffee.h"
#include"stdio.h"
#include"MakeReceipe.h"
class Driver
{
public:
	void PressButton(int a);
};

void Driver::PressButton(int a)
{
	tea t(true);
	coffee c(false);

	switch (a)
	{
	case 1: 
		t.makeReceipe();
		break;
	case 2: 
		c.makeReceipe();
		break;
	default:
		std::cout << "Not correct choice";
	}
}

int main()
{
	Driver d;
	d.PressButton(1);
	std::cout << "Done tea" << std::endl;
	d.PressButton(2);
	getchar();

}