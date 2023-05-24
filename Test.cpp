#include "Sort.h"


int main()
{
	int a[] = { 6,1,2,7,9,3,4,5,10,8 };
	//BubbleSort(a, 9);
	QuickSort(a, 0, 9);
	SortPrint(a, 10);
	return 0;
}