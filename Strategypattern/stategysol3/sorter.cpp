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
	algo->sort(assdesc1);
		
}

void Sorter::setassdesc1(AssDesc8 * assdesc)
{
	assdesc1 = assdesc;
}
