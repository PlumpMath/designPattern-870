#pragma once
#include"INumeric.h"

class Constant : public Numeric
{
	int value;
public:
	Constant(int value);

	int getcontext(SymbolTable stable);
};
