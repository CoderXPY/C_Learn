#define   _CRT_SECURE_NO_WARNINGS

#include <cstdio>//����ͷ�ļ�
using namespace std;
bool p[15];//Ͱ������Ƿ����
bool f(int n)//����д�ӳ���ĺ�ϰ�ߣ�����Ͳ���ܳ�
{
    while (n)
    {
        if (p[n % 10] == 0)
            return 0;//������--ֱ������
        n /= 10;
    }
    return 1;
}
bool check(int x, int y)
{
    int a = x * (y % 10), b = x * (y / 10), test = x * y;//��ν�ġ����ֳ˻���
    if (a > 999 || b > 999 || test > 9999)//��Լʱ�䣬������λ���������ϵ�
        return 0;
    if (f(x) == 1 && f(y) == 1 && f(a) == 1 && f(b) == 1 && f(test) == 1)//���ݡ��������ԡ���ֻҪ��һΪ�پͽ����жϣ���˲�����ʱ
        return 1;
    else
        return 0;
}
int main()
{
    int n, key, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &key);
        p[key] = true;//Ͱ�ľ��������һ��
    }
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 10; j < 100; j++)//�����ı����������
        {
            if (check(i, j) == 1)
                ans++;//������++��
        }
    }
    printf("%d\n", ans);//���
    return 0;
}