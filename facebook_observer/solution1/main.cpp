#include"Person1.h"
#include"Person2.h"
#include"Person3.h"
#include"stdio.h"
#include"Driver.h"

int main()
{
	Driver driver;
	Person1 *p1 = new Person1();
	p1->setName("Adya");
	p1->setAddress("Lingampally");
	p1->setEmailId("adyanand1303@gmail.com");
	driver.attach(p1);

	Person2 p2;
	p2.setName("Minu");
	p2.setAddress("Patna");
	p2.setEmailId("minujha2904@gmail.com");
	driver.attach(&p2);

	Person3 *p3 = new Person3("Raman", "Bangalore", "kritya1990@gmail.com");
	driver.attach(p3);

	p1->WriteOnWall("Hi how r u all",&driver);

	getchar();
	return 0;
}
