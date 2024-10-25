#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

//void sort(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (arr[j] > arr[i]) {
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//
//int main() {
//	int n, l, r, arr[51] = {0}, i,  count = 0, ave = 0;
//	//数据的取入
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		ave += arr[i];
//	}
//	scanf("%d%d", &l, &r);
//	//从大到小排序
//	sort(arr, n);
//	//判断是否满足题目
//	if (ave > r * n || ave < l * n) {
//		printf("-1");
//	}
//	//满足条件的进行统计
//	else {
//		for (i = 0; i < n; i++) {
//			if (arr[i] > r) {
//				arr[i]--;
//				arr[n - 1]++;
//				count++;
//				i--;
//				sort(arr, n);
//			}
//		}
//		for (i = 0; i < n; i++) {
//			if (arr[i] < l) {
//				arr[i]++;
//				arr[0]--;
//				count++;
//				i--;
//				sort(arr, n);
//			}
//		}
//		printf("%d", count);
//	}
//	return 0;
//}

int max(int x, int y) {
	if (x < y)
		return y;
	else
		return x;
}

int main()
{
	int a, b;
	int n, sum = 0, x = 0, y = 0;
	int ans[51];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &ans[i]);
		sum += ans[i];
	}//输入
	scanf("%d%d", &a, &b);
	if (sum > b * n || sum < a * n)
	{
		printf("-1");
		return 0;//可以停下了
	}
	for (int i = 1; i <= n; i++)
	{
		if (ans[i] < a)
		{
			x += a - ans[i];
		}
		if (ans[i] > b)
		{
			y += ans[i] - b;
		}
	}
	printf("%d", max(x, y));
	return 0;
}