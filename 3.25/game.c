#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

void SetBoard(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win < row*col- EASY_COUNT)
	{
		printf("请选择坐标:>");
		scanf("%d%d", &x, &y);
		if(x>=1&&x<=9&&y>=1&&y<=9)
		{
			if (mine[x][y] == '1')
			{
				printf("不好意思，你被炸死了！\n");
				DispalyBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int ret = get_mine_count(mine, x, y);
				show[x][y] = ret + '0';
				DispalyBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("非法输入，请重新输入:>");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你成功\n");
		DispalyBoard(show, ROW, COL);
	}
}