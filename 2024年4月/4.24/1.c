#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int is_string_rotate(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	strncat(str1, str1, len);
	int ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
	return ret != NULL;
}

int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 0)
	{
		printf("no\n");
	}
	else 
	{
		printf("yes\n");
	}
	return 0;
}