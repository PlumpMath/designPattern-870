#pragma once
#include"iostream"
class Sorter
{
private:
	int *array;
	std::string algo;
	void binaysort();
	void mergesort();
public:
	void setAlgo(std::string algo);
	void setArray(int Array[]);
	void sort();

};