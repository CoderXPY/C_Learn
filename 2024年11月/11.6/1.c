#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a[1005], n, m, arr = 1;
int main()
{
    scanf("%d%d", &n, &m);
    while (arr) {
        if (arr >= m + 1) {					//�ﵽ�߽�ʱ��ӡ��
            for (int i = 1; i <= m; i++)
                printf("%3d", a[i]);//ע�ⳡ������
            printf("\n");
            arr--;						   //���ݵ�ǰһλ
            continue;
        }
        if (!a[arr]) {						 //����λ��Ϊ��
            a[arr] = a[arr - 1] + 1;		 //����ǰһλ�����ϼ�һ
            arr++;
            continue;
        }
        if (a[arr] + m - arr < n) {			//**�ؼ�** �ж��ڵ�ǰλΪa[arr]������������(m - arr)λ�Ƿ񳬳���Ŀ�������������
            a[arr++]++;					 //��ǰλ�ԼӺ�Ų����һλ	
            continue;
        }
        a[arr--] = 0;						//����ǰλ����,������ǰһλ
    }
    return 0;
}