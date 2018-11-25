#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h> 
#include <stdlib.h> 
#include "game.h" 
#define MINE_COUNT 10 
//������ 
void set_mine(char mine[ROW + 2][COL + 2], int row, int col)
{
	int count = MINE_COUNT;
	int x;
	int y;
	while (count)
	{
		x = rand() % 10 + 1; //����1~10���� 
		y = rand() % 10 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//��ʾ���� 
void display(char board[ROW + 2][COL + 2], int row, int col)
{
	int i;
	int j;
	printf(" ");
	for (i = 1; i < row - 1; i++)
		printf(" %d ", i);
	printf("\n----------------------------------\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%2d|", i);
		for (j = 1; j < col - 1; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
//ͳ���׵ĸ��� 
int get_mine_count(char mine[ROW + 2][COL + 2], int x, int y)
{
	return (mine[x - 1][y - 1] - '0'
		+ mine[x - 1][y] - '0'
		+ mine[x - 1][y + 1] - '0'
		+ mine[x][y - 1] - '0'
		+ mine[x][y + 1] - '0'
		+ mine[x + 1][y - 1] - '0'
		+ mine[x + 1][y] - '0'
		+ mine[x + 1][y + 1] - '0');
}
//����Ϸ 
void play_game(char mine[ROW + 2][COL + 2], char board[ROW + 2][COL + 2])
{
	int x;
	int y;
	int count = 0;
	while (1)
	{
		printf("��������(x,y):");

		scanf("%d%d", &x, &y);
		//�ж�����Ϸ��� 
		if ((1 <= x && x <= ROW) && (1 <= y && y <= COL))
		{
			//�жϸ�λ����û���� 
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				display(mine, ROW + 2, COL + 2);
				break;
			}
			else
			{
				int ret = get_mine_count(mine, x, y);
				board[x][y] = ret + '0'; //1+'0'='1' 
				//������Χû�ף�����ʵ��չ�� 
				if (ret == 0)
				{
					board[x][y] = board[x - 1][y - 1] = board[x - 1][y] =
						board[x - 1][y + 1] = board[x][y - 1] = board[x][y + 1] =
						board[x + 1][y - 1] = board[x + 1][y] = board[x + 1][y + 1] = ' ';
				}
				count++;
				display(board, ROW + 2, COL + 2);
				if (count == MINE_COUNT)
				{
					printf("��ϲ�㣬Ӯ��\n");
					display(mine, ROW + 2, COL + 2);
					break;
				}
			}
		}
		else
			printf("Խ�磬�������\n");
	}
}