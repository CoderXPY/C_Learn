#include<stdio.h>
#include<math.h>

int main() {
    int a;
    scanf("%d", &a);
    char ch[400][800] = { "  *  ", " * * ", "* * *" };
    int i, j, k;
    int row = 3;
    int col = 5;
    for (i = 0; i < a - 1; i++)
    {
        for (j = 0; j < row; j++)
        {

            for (k = 0; k < col; k++)
            {
                ch[j + row][k] = ch[j][k];
                ch[j + row][k + 1 + col] = ch[j][k];
            }
        }
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
            {
                ch[j][k] = ' ';
            }
        }
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
            {
                ch[j][k + row] = ch[j + row][k];
            }
        }
        row *= 2;
        col = 2 * col + 1;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++) {
            if (ch[i][j] == '*')
            {
                printf("%c", ch[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < row - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}