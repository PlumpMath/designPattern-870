#include"iostream"
#include"sorter.h"
#include"stdio.h"
#include"binarysort.h"
#include"mergesort.h"
#include"assdesc.cpp"


int main()
{
	Sorter *s = new Sorter;
	assdesc2 ass;
	int array[] = {2,3,4,5};
	s->setArray(array);
	s->setassdesc1(&ass);
	Mergesort m;
	s->setAlgo(&m);
	s->sort();
	Binarysort b;
	s->setAlgo(&b);
	s->setassdesc1(&ass);
	s->sort();
	
	
	getchar();
}
