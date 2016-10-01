#pragma once
#include"iostream"
#include"Abstractsort.h"
#include"Abstractassdesc.h"

class Sorter
{
private:
	int *array;
	AbstractSort1 *algo;
	void binaysort();
	void mergesort();
	AssDesc8 *assdesc1;
public:
	void setAlgo(AbstractSort1 *algo);
	void setArray(int Array[]);
	void setassdesc1(AssDesc8 *);
	void sort();

};