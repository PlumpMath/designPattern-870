#pragma once
#include"INumeric.h"

class Sum : public Numeric
{
	Numeric *left, *right;

public:
	Sum(Numeric *left, Numeric* right);
	int getcontext(SymbolTable sTable);
};