#pragma once
#include<map>
#include"iostream"

class SymbolTable
{
	std::map<char, int> symbolTable;

public:
	void add(char var, int value);
	int getValue(char key);

};
