#include "Sort.h"

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void BubbleSort(int* a, int n)
{
	for (int j = 1; j < n; ++j)
	{
		for (int i = 0; i < n - j; ++i)
		{
			if (a[i] < a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
			}
		}
	}
}

void SortPrint(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
}

void InsertSort(int* a, int n)
{
	

}

int GetMid(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] > a[mid])
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else // a[left]<a[mid]
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}


void QuickSort(int* a, int left, int right)
{
	// 递归终止条件
	if (left >= right)
		return;

	int begin = left;
	int end = right;
	/*int randi = left + (rand() % (right - left));
	Swap(&a[left], &a[randi]);*/
	// 三数取中
	int ret = GetMid(a, left, right);
	int key = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[key])
			--right;
		while (left < right && a[left] <= a[key])
			++left;
		Swap(&a[left], &a[right]);
	}
	Swap(&a[key], &a[left]);
	key = left;
	QuickSort(a, begin, key - 1);
	QuickSort(a, key + 1, end);
}



