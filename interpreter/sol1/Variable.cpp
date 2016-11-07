#include "Variable.h"

Variable::Variable(char name)
{
	this->name = name;
}

int Variable::getcontext(SymbolTable stable)
{
	return stable.getValue(name);
}

