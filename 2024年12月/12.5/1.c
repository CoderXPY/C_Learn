#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
using namespace std;
int h, k, f[20000];
int main()
{
    scanf("%d%d", &h, &k);
    f[0] = k + 1;//��ʼ��
    int t = f[0] + k + 1;//���ñ���t�����ظ����
    for (int i = 1; i <= h; i++)
    {
        f[i] = t;
        t += f[i];
    }
    printf("%d\n", f[h]);
    return 0;
}