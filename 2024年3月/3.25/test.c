#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	DispalyBoard(show, ROW, COL);

	SetBoard(mine, ROW, COL);
	//DispalyBoard(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
	return 0;
}