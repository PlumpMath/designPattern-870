#include"iostream"
#include"stdio.h"
#include"Sum.h"
#include"Variable.h"
#include"Constant.h"


int main()
{
	SymbolTable sTable;
	sTable.add('a', 2);
	sTable.add('b', 3);
	sTable.add('c', 4);

	Numeric *exp = new Sum(new Sum(new Variable('a'), new Variable('b')), new Variable('c'));

	std::cout << exp->getcontext(sTable);


	getchar();
	return 0;
}