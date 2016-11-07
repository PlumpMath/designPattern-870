#pragma once
#include"INumeric.h"

class Variable : public Numeric
{
	int value;
	char name;
public:
	Variable(char name);

	int getcontext(SymbolTable stable);
};
