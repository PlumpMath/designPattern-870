#include "Sum.h"

Sum::Sum(Numeric * left, Numeric * right)
{
	this->left = left;
	this->right = right;
}

int Sum::getcontext(SymbolTable sTable)
{
	return left->getcontext(sTable) + right->getcontext(sTable);
}
