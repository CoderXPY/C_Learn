#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int DigitSum(int a)
//{
//	if (a > 9)
//	{
//		return a % 10 + DigitSum(a / 10);
//	}
//	else
//		return a;
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//double Pow(int a, int b)
//{
//	if (b == 0)
//		return 1;
//	else if (b > 0)
//		return a * Pow(a, b - 1);
//	else
//		return 1.0 / Pow(a, -b);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//int main()
//{
//	////int n = 3;
//	////int arr[n];//�˴�[]��ֻ��д����
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	////��ȫ��ʼ��
//	//int arr[9] = { 1,2,3,4 };
//	////����ȫ��ʼ��ʣ��ȫΪ0
//	char ch1[5] = { 'x','p','y' };
//	char ch2[] = { 'x','p','y' };
//	char ch3[3] = "xpy";
//	printf("%s", ch3);
//	char ch4[] = "xpy";
//	//�˴������4����'x''p''y''\0'
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[5] = 6;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//	//һά�������ڴ����������
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//����������Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[3][4];
//	////3��4�еĶ�ά����
//	//char  ch[3][4];
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//����ȫ��ʼ������ȫΪ0
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };
//	int arr2[][4] = { {1,2},{3,4},{5,6} };
//	//��ά������п���ʡ�ԣ��в���
//	return 0;
//}

//int main() 
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p ", i, i, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	//��ά����Ҳ���������У���ʽ�ϸ�һά����һ��
//	return 0;
//}

//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int a = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = a;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�˴���szһ��Ҫ�ں����ⲿ���������������������Ԫ�صĵ�ַ
//	bubble_sort(arr,sz);
//	return 0;
//}

int main()
{
	int arr[10];
	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	//��������������Ԫ�صĵ�ַ
	return 0;
}