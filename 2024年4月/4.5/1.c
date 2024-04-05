#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? a : b;
//	while (1)
//	{
//		if ((min % a) == 0 && (min % b) == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (1)
//	{
//		if (a*i % b == 0)
//		{
//			printf("%d\n", a*i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	char tmp;
//	while(left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr,arr+len-1);
//
//	char* start = arr;
//	while(*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);
//		if (*end == ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hahah\n");
//	}
//	return 0;
//}

int main()
{
	int a = -10;
	int b = 10;
	//大端字节序，小端字节序
	return 0;
}
