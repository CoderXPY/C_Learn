#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("*********   1. play     ********\n");
	printf("*********   0. exit     ********\n");
	printf("********************************\n");
}

void game()
{
	char board[ROW][COL];//定义棋盘
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	char ret = 0;
	while(1)
	{
		PlayerMove(board, ROW, COL);//玩家下
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		ComputerMove(board, ROW, COL);//电脑下
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家胜利\n");
	else if (ret == '#')
		printf("电脑胜利\n");
	else
		printf("游戏平局\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}