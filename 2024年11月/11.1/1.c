#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int i, find, k, m, begin;
int check(int remain)
{
    int result = (begin + m - 1) % remain;
    if (result >= k) {//判断出列的那个人
        begin = result;
        return 1;
    }
    else { return 0; }
}
int main() {
    scanf("%ld", &k);
    m = k;
    while (!find)
    {
        find = 1; begin = 0;//设置第一个
        for (i = 0; i < k; i++)
        {
            if (!check(2 * k - i))//如果判断好，就可以退出了……
            {
                find = 0; break;
            }
        }
        m++;
    }
    printf("%d", m - 1);//多加了一个，减回去
    return 0;
}