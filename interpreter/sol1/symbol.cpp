#include "symbol.h"

void SymbolTable::add(char var, int value)
{
	symbolTable.insert(std::pair<char, int>(var, value));
}

int SymbolTable::getValue(char key)
{
	std::map<char, int>::iterator it;
	it=symbolTable.find(key);

	return it->second;
}
