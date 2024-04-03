#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//my_strcpy(char* dest, char* arc)
//{
//	while (*arc != '\0')
//	{
//		*dest = *arc;
//		dest++;
//		arc++;
//	}
//	*dest = *arc;
//}

//my_strcpy(char* dest, char* arc)
//{
//	while (*arc != '\0')
//	{
//		*dest++ = *arc++;
//	}
//	*dest = *arc;
//}

my_strcpy(char* dest, char* arc)
{
	while (*dest++ = *arc++)
	//既拷贝了\0 又停止了循环
	{
		;
	}
}

int main()
{
	char arr1[10] = "**********";
	char arr2[] = "hello";
	//strcpy(arr1, arr2);
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}