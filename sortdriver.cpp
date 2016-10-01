#include"iostream"
#include"sorter.h"
#include"stdio.h"



int main()
{
	Sorter *s = new Sorter;
	int array[] = {2,3,4,5};
	s->setArray(array);
	s->setAlgo("binarysort");
	s->sort();
	s->setAlgo("mergesort");
	s->sort();
	getchar();
}
