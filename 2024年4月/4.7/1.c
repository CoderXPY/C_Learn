#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	char ch = 'x';
//	char* pc = &ch;
//	char* ps = "xpy";
//	printf("%c\n", *ps);
//	//��xpy�����ַ�x�ĵ�ַ����ps
//	char arr[] = "xpy";
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char* pa = "xpy";
//	//�˴���xpy��Ϊ�����ַ����������޸�
//	*pa = "ypx";
//	printf("%s\n", pa);
//	return 0;
//}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 2,3,6,7,9 };

	int* arr[3] = { a,b,c };
	//ָ�����飬�������ָ��
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(arr[i] + j));
			printf("%d ", arr[i][j]);
			//ģ���ά���飬���Ƕ�ά����
		}
		printf("\n");
	}
	return 0;
}