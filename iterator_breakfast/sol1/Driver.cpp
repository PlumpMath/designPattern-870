#include"breakfast.h"
#include"Dinner.h"
#include"stdio.h"

int main()
{

	MenuItem m1;
	m1.setName("item1");
	m1.setPrice(2);

	MenuItem m2;
	m2.setName("item2");
	m2.setPrice(4);

	Breakfast breakfast;
	breakfast.addItem(m1);
	breakfast.addItem(m2);

	breakfast.traverse();

	Dinner dinner;
	dinner.addItem(m1);
	dinner.addItem(m2);
	dinner.traverse();


	getchar();
	return 0;
}