#define   _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int lon1 = 1, lon = 1, start = 1000000, end = -1, a, b, y[1000000], n, m, ans1 = -1, ans2 = -1;
int flag;
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d", &a, &b);
		start = min(start, a);
		end = max(end, b);
		y[a] += 1;
		y[b] -= 1;//����������ҿ����� 
	}
	for (int i = 1; i <= end; i++)
	{
		y[i] = y[i - 1] + y[i];
		if (y[i] == 0 && y[i - 1] == 0 && i >= start + 1)
			//����������ϣ���˵���˵�һ��Ԫ��Ҳ��0��ֱ��lon��ʼֵ��Ϊ1���� 
		{
			lon++;
			ans2 = max(ans2, lon);
		}
		else
		{
			lon = 1;//��ʼֵ��1��Ϊ���жϼ��ϵ�һ��0 
		}
		if (y[i] >= 1 && y[i - 1] >= 1 && i >= start + 1)//ͬ�� 
		{
			lon1++;
			ans1 = max(ans1, lon1);
		}
		else
		{
			lon1 = 1;
		}
	}
	if (ans1 == -1)//�����΢һ�м��� 
	{
		printf("0 %d", ans2);
		return 0;
	}
	if (ans2 == -1)
	{
		printf("%d 0", ans1);
		return 0;
	}
	printf("%d %d\n", ans1, ans2);
	return 0;//������� 
}