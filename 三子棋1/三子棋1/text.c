#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()				//界面
{
	printf("*****************************************\n");
	printf("*******    1.play      0.exit    ********\n");
	printf("*****************************************\n");
}

void game()			//游戏函数
{
	int ret = 0;
	char board[ROW][COL] = { 0 };			//棋盘数组
	srand((unsigned int)time(NULL));

	init_board(board, ROW, COL);

	while (1)					 //电脑先走，然后判断输赢，玩家走，接着判断输赢
	{
		computer_move(board, ROW, COL);
		if ((ret = check_win(board, ROW, COL)) != ' ')
		{
			break;
		}
		display_board(board, ROW, COL);
		player_move(board, ROW, COL);
		if ((ret = check_win(board, ROW, COL)) != ' ')
		{
			break;
		}
		display_board(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("you win!\n");
	}
	else if (ret == 'o')
	{
		printf("computer win!\n");
	}
	else if (ret == 'q')
	{
		printf("平局！\n");
	}
	display_board(board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("enter error! please enter again:\n");
			break;
		}
	} while (input);

	return 0;
}


