#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//void test(int* p1, int* p2)
//{
//	*p1 = 2;
//	*p2 = 3;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}

//int a = 0;
//int b = 0;
//void test()
//{
//	a = 2;
//	b = 4;
//}
//int main()
//{
//	test();
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

int my_strlen(char* star)
{
	int count = 0;
	while (*star != '\0')
	{
		count++;
		star++;
	}
	return count;
}
//void reverse_string(char* star)
//{
//	int left = 0;
//	int right = my_strlen(star) - 1;
//	while(left < right)
//	{
//		char tmp = star[left];
//		star[left] = star[right];
//		star[right] = tmp;
//		left++;
//		right--;
//	}
//}
void reverse_string(char* star)
{
	char tmp = *star;
	int len = my_strlen(star);
	*star = *(star + len - 1);
	*(star + len - 1) = '\0';
	if (my_strlen(star + 1) >= 2)
	{
		reverse_string(star + 1);
	}
	*(star + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}