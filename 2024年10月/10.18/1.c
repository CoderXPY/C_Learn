#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void quicksort(int x[], int left, int right)  //快速排序 
{
	if (left < right)
	{
		int i = left, j = right, key = x[left];
		while (i < j)
		{
			while (i<j && x[j]>key)
				j--;
			if (i < j)
				x[i++] = x[j];

			while (i < j && x[i] < key)
				i++;
			if (i < j)
				x[j--] = x[i];
		}
		x[i] = key;
		quicksort(x, left, i - 1);
		quicksort(x, i + 1, right);
	}
}


int main() {
	int n, arr[200001],i;
	scanf("%d", &n);
	//取入所有数字
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	//对取入的数字从小到大排序
	quicksort(arr, 0, n - 1);
	//for (i = 0; i < n; i++) {
	//	for (int j = i; j < n; j++) {
	//		if (arr[j] < arr[i]) {
	//			int tmp = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = tmp;
	//		}
	//	}
	//}

	//对数字统计并输出
	int N = arr[0], count = 1;
	for (i = 1; i < n; i++) {
		if (arr[i] == N)
			count++;
		else {
			printf("%d %d\n", N, count);
			N = arr[i];
			count = 1;
		}
	}
	printf("%d %d\n", N, count);
	return 0;
}