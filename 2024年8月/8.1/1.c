#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	char arr[51] = { 0 };
	scanf("%d\n%s", & n, &arr);
	int i = 0;
	while (arr[i])
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if (arr[i] == 'z')
			{
				arr[i] = 'a';
				j++;
				if (j >= n)
					break;
			}
			arr[i] += 1;
		}
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}