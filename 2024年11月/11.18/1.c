#define   _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main() {
	int n, m, i, w[11000] = { 0 }, count = 0;
	//ȡ������
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &w[i]);
	}
	//t��¼��һ��ͬѧ
	int t = m + 1;
	while (t <= n + m)
	{
		for (int i = 1; i <= m; i++)     //  ö��m��ˮ��ͷ 
		{
			w[i]--;
			if (w[i] == 0)
			{
				w[i] = w[t];     //  ������ѧ����ˮ������ ģ�⻻��һ��ѧ�������ˮ��ͷ
				t++;
			}
		}
		count++;      //  ������ģ���1���ӵĽ�ˮʱ�� ����ans��һ 
	}
	printf("%d", count);
	return 0;
}