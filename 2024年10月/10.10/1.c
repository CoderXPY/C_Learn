#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


char a[101], b[101], s[101]; int c[101];
int main()
{
	int sum = 0;
	scanf("%s\n%s\n%s", a, b, s);
	if (strlen(a) != strlen(b))
	{
		printf("Failed");
		return 0;
	}//似乎有点多余，但字符串长度都不相等，后面的就无从谈起了
	for (int i = 0; i < strlen(a); i++)
		c[i] = a[i] * 100 + b[i];
	for (int i = 0; i < strlen(a); i++)
		for (int j = i + 1; j < strlen(a); j++)
			if (c[i] / 100 == c[j] / 100 && c[i] % 100 != c[j] % 100 || c[i] % 100 == c[j] % 100 && c[i] / 100 != c[j] / 100)
			{
				printf("Failed");
				return 0;
			}//判断3
	for (int i = 0; i < strlen(a); i++)
		if (c[i] != 0)sum++;
	if (sum < 26)
	{
		printf("Failed");
		return 0;
	}//判断2
	for (int i = 0; i < strlen(s); i++)
		for (int j = 0; j < strlen(a); j++)
			if (s[i] == a[j])
			{
				printf("%c",b[j]);
				break;
			}//愉(bao)快(li)地输出，注意控制输出次数
	return 0;
}