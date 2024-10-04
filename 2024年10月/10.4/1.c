#define  _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main()
{
	char arr[14] = { 0 };
	char mod[12] = "0123456789X";
	int x = 0;
	int i = 0;
	int j = 1;
	for (i = 0; i < 13; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] != '-'&&i!=12)
		{
			x += (arr[i]-'0') * (j++);
		}
	}
	if (mod[x%11] == arr[12])
		printf("Right\n");
	else
	{
		for (i = 0; i < 12; i++)
		{
			printf("%c", arr[i]);
		}
		printf("%c", mod[x%11]);
	}
	return 0;
}