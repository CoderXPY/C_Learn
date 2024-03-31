#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}//�˴��벻ͨ��

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for(j = 0;j<col;j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���:\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
			}
			break;
		}
		else
		{
			printf("�Ƿ����룬����������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("����:\n");
	while(1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int IsNull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i <= row - 1; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
//		{
//			return board[i][0];
//		}
//	}
//	for (i = 0; i <= col - 1; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
//		{
//			return board[0][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][0] != ' ')
//	{
//		return board[1][1];
//	}
//	int ret = IsNull(board, row, col);
//	if (ret == 1)
//	{
//		return 'Q';
//	}
//	return 'C';
//}//�˴��벻ͨ��
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0;j <= col -3;j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	for (j = 0; j <= col - 1; j++)
	{
		for (i = 0; i <= row - 3; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	for (i = 0; i <= row - 3; i++)
	{
		for (j = 0; j <= col - 3; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	for (i = row - 1; i >= 2; i--)
	{
		for (j = col - 1; j >= 2; j--)
		{
			if (board[i][j] == board[i - 1][j - 1] && board[i - 1][j - 1] == board[i - 2][j - 2] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	int ret = IsNull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';
}