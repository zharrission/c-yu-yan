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
	char mine[ROW + 2][COL + 2];//定义雷数组 
	char board[ROW + 2][COL + 2];//定义显示数组 
	//初始化数组 
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

	set_mine(mine, ROW + 2, COL + 2);//放雷 
	display(board, ROW + 2, COL + 2);
	play_game(mine, board);//玩游戏 
}
int main()
{
	int choose = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入!");
		}
	} while (choose);
	system("pause");
	return 0;
}