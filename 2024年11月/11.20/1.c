#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define N 1000000
int n, x, h;
char s[N], t[N];
struct node// �ṹ������ֺ�Ǯ �Ұ��ṹ��
{
    char name[20];
    int sum;
};
struct node q[N];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%s",&q[i].name);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s);
        for (int j = 1; j <= n; j++)
            if (strcmp(s, q[j].name) == 0) { x = j; break; }//�Ƚ����֣�����˭������j��ǧ��Ҫֻ�Ƚ�����ĸ����֮ǰ������͵��Ȼ��ûa
        int a, b;
        scanf("%d%d", &a, &b);
        if (b == 0)continue;//����ע��һ��Ҫ�жϣ��Ͼ�0������������Ҫ��Ȼ��ը
        int y = a / b;
        int m = y * b;//��ÿ�˷ֵ���Ǯ��
        q[x].sum -= m; //��Ǯ
        for (int k = 1; k <= b; k++)
        {
            scanf("%s", s);
            for (int g = 1; g <= n; g++)
                if (strcmp(s, q[g].name) == 0) { h = g; break; }//��Ǯ ͬ�ϲ�Ҫֻ�Ƚ�����ĸmm
            q[h].sum += y;//��Ǯ
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%s %d\n", q[i].name, q[i].sum);
    return 0;
}