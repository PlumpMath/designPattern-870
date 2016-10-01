#include"sorter.h"
void Sorter::setAlgo(AbstractSort1 *Algo)
{
	algo = Algo;
}

void Sorter::setArray(int Array[])
{
	array = Array;
}

void Sorter::sort()
{
	algo->sort();
		
}
