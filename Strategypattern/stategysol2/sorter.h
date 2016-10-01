#pragma once
#include"iostream"
#include"Abstractsort.h"
class Sorter
{
private:
	int *array;
	AbstractSort1 *algo;
	void binaysort();
	void mergesort();
public:
	void setAlgo(AbstractSort1 *algo);
	void setArray(int Array[]);
	void sort();

};