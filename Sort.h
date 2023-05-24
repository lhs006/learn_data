#pragma once
#include <iostream>
using namespace std;

void Swap(int* p1, int* p2);
// 冒泡排序
void BubbleSort(int* a, int n);
// 打印
void SortPrint(int* a, int n);
// 直接插入排序
void InsertSort(int* a, int n);
// 快速排序
void QuickSort(int* a, int left, int right);