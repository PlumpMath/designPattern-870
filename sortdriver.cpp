#include"iostream"
#include"sorter.h"
#include"stdio.h"
#include"binarysort.h"
#include"mergesort.h"


int main()
{
	Sorter *s = new Sorter;
	int array[] = {2,3,4,5};
	s->setArray(array);
	Mergesort m;
	s->setAlgo(&m);
	s->sort();
	Binarysort b;
	s->setAlgo(&b);
	s->sort();
	
	
	getchar();
}
