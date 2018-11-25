#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h> 
#include <Windows.h> 
#include <time.h> 
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("********* 1.play ********\n");
	printf("********* 0.exit ********\n");
	printf("*************************\n");
}


void game()
{
	char mine[ROW + 2][COL + 2];//���������� 
	char board[ROW + 2][COL + 2];//������ʾ���� 
	//��ʼ������ 
	int i;
	int j;
	for (i = 0; i < ROW + 2; i++)
	{
		for (j = 0; j < COL + 2; j++)
		{
			mine[i][j] = '0';
			board[i][j] = '*';
		}
	}

	set_mine(mine, ROW + 2, COL + 2);//���� 
	display(board, ROW + 2, COL + 2);
	play_game(mine, board);//����Ϸ 
}
int main()
{
	int choose = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������!");
		}
	} while (choose);
	system("pause");
	return 0;
}