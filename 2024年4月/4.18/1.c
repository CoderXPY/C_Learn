#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
	}
}

void bubble_sort(void* base,
	int sz,
	int width,
	int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	bubble_sort(arr, sz, width, cmp);
}

int main()
{

	test();
	return 0;
}