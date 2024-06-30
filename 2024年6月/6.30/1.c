#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char arr[256] = { 0 };
	scanf("%s", arr);
	int countboy = 0;
	int countgirl = 0;
	int i = 0;
	int l = strlen(arr);
	for (i = 0; i < l - 2; i++)
	{
		if (arr[i] == 'b' || 
			arr[i + 1] == 'o' ||
			arr[i + 2] == 'y')
			countboy++;
	}
	for (i = 0; i < l - 3; i++)
	{
		if (arr[i] == 'g' ||
			arr[i + 1] == 'i' ||
			arr[i + 2] == 'r' ||
			arr[i + 3] == 'l')
			countgirl++;
	}
	printf("%d\n%d", countboy, countgirl);
	return 0;
}