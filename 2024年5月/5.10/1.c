#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void find(int arr[], int sz, int* px, int* py)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*px ^= arr[i];
		}
		else
		{
			*py ^= arr[i];
		}
	}

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	int x = 0;
	int y = 0;
	find(arr, sz, &x, &y);
	printf("%d %d\n", x, y);
	return 0;
}