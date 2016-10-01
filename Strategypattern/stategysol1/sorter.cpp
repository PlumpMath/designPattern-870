#include"sorter.h"
void Sorter::setAlgo(std::string Algo)
{
	algo = Algo;
}

void Sorter::setArray(int Array[])
{
	array = Array;
}

void Sorter::sort()
{
	if (algo.compare("binarysort") == 0)
		binaysort();
	else if (algo.compare("mergesort") == 0)
		mergesort();
	else
		std::cout << "enter correct algo name " << std::endl;
		
}

void Sorter::binaysort()
{
	std::cout << "Sorted through binary sort " << std::endl;
}
void Sorter::mergesort()
{
	std::cout << "Sorted through merge sort " << std::endl;
}