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
	}//�ƺ��е���࣬���ַ������ȶ�����ȣ�����ľ��޴�̸����
	for (int i = 0; i < strlen(a); i++)
		c[i] = a[i] * 100 + b[i];
	for (int i = 0; i < strlen(a); i++)
		for (int j = i + 1; j < strlen(a); j++)
			if (c[i] / 100 == c[j] / 100 && c[i] % 100 != c[j] % 100 || c[i] % 100 == c[j] % 100 && c[i] / 100 != c[j] / 100)
			{
				printf("Failed");
				return 0;
			}//�ж�3
	for (int i = 0; i < strlen(a); i++)
		if (c[i] != 0)sum++;
	if (sum < 26)
	{
		printf("Failed");
		return 0;
	}//�ж�2
	for (int i = 0; i < strlen(s); i++)
		for (int j = 0; j < strlen(a); j++)
			if (s[i] == a[j])
			{
				printf("%c",b[j]);
				break;
			}//��(bao)��(li)�������ע������������
	return 0;
}