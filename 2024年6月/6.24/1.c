#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char arr1[7] = { 0 };
	char arr2[7] = { 0 };
	scanf("%[A-Z]\n%[A-Z]", &arr1, &arr2);
	int num1 = 1;
	int num2 = 1;
	int i = 0;
	while (arr1[i] != '\0')
	{
		num1 *= arr1[i] - 'A' + 1;
		i++;
	}
	i = 0;
	while (arr2[i] != '\0')
	{
		num2 *= arr2[i] - 'A' + 1;
		i++;
	}
	if (num1 % 47 == num2 % 47)
		printf("GO");
	else
		printf("STAY");
	return 0;
}