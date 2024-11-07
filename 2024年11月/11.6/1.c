#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a[1005], n, m, arr = 1;
int main()
{
    scanf("%d%d", &n, &m);
    while (arr) {
        if (arr >= m + 1) {					//达到边界时打印解
            for (int i = 1; i <= m; i++)
                printf("%3d", a[i]);//注意场宽设置
            printf("\n");
            arr--;						   //回溯到前一位
            continue;
        }
        if (!a[arr]) {						 //若该位置为空
            a[arr] = a[arr - 1] + 1;		 //在其前一位基础上加一
            arr++;
            continue;
        }
        if (a[arr] + m - arr < n) {			//**关键** 判定在当前位为a[arr]的情况下向后推(m - arr)位是否超出题目的最大数字限制
            a[arr++]++;					 //当前位自加后挪至后一位	
            continue;
        }
        a[arr--] = 0;						//将当前位归零,回溯至前一位
    }
    return 0;
}