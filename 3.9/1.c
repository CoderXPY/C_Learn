#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	"dfhsuji";//�ַ���
//	char arr[] = "xpy";
//	//�ַ�����β������һ��\0�ַ�
//	//\0���ַ���������־
//
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "xpy";
//	char arr2[] = { 'x','p','y' };
//	char arr3[] = { 'x','p','y','\0' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//��ӡû�н�����־���У���
//	printf("%s\n", arr3);
//
//	return 0;
//}


//int main()
//{
//	int len = strlen("xpy");//ͷ�ļ�Ϊstring.h
//	printf("%d\n", len);//\0���㳤��ʱ������
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "xpy";
//	char arr2[] = { 'x','p','y' };
//	char arr3[] = { 'x','p','y','\0' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//
//	return 0;
//}


//int main()
//{
//	printf("c:\test\n");
//	printf("ab\cd\n");
//	//ת���ַ�\t��\c
//
//	printf("c:\\test\n");
//	printf("ab\\cd\n");
//
//
//	printf("(are you ok??)\n");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("\a\a\a");
//
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\130');
//	//8������130 = 10������88
//	//X��ASCII��ֵ��88�����Ի��ӡ��X
//
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	//8�������в������8����\32��8�Ƿֿ���
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú�ѧϰ��(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�ܿ���");
//	}
//	else
//	{
//		printf("�ؼ�");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 3000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 3000)
//	{
//		printf("�ɹ�\n");
//	}
//	else
//	{
//		printf("ʧ��\n");
//	}
//	return 0;
//}

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	//int a = 1;
	//int b = 2;
	//int sum = a + b;
	//printf("%d\n", sum);
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//int sum = num1 + num2;
	int sum = ADD(num1, num2);
	printf("%d\n", sum);


	return 0;
}