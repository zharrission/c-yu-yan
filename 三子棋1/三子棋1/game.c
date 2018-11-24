#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void init_board(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', col*row*sizeof(char));
	//memset�����ֽ�Ϊ��λ����ʼ���ڴ�顣����ʼ��һ���ֽڵ�λ������ʱ��
	//������memset��ÿ�����鵥Ԫ��ʼ�����κ�����Ҫ��ֵ
}

void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i != 2)
		{
			printf("---|---|---\n");
		}
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;

	while (1)
	{
		printf("����������(a,b):\n");
		scanf("%d%d", &a, &b);
		a--;
		b--;
		if (((a >= 0) && (a <= 2)) &&
			((b >= 0) && (b <= 2)))
		{
			if (board[a][b] == ' ')
			{
				board[a][b] = '*';
				break;
			}
			else
			{
				printf("�˴������ӣ�\n");
			}
		}
		else
		{
			printf("�������\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int a = rand() % row;
		int b = rand() % col;
		if (board[a][b] == ' ')
		{
			board[a][b] = 'o';
			break;
		}
	}
}

static is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char check_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i<row; i++)
	{
		if ((board[i][0] == board[i][1])
			&& (board[i][1] == board[i][2])
			&& (board[i][1] != ' '))
			return board[i][1];
	}
	for (i = 0; i<col; i++)
	{
		if ((board[0][i] == board[1][i])
			&& (board[1][i] == board[2][i])
			&& (board[1][i] != ' '))
			return board[1][i];
	}
	if ((board[0][0] == board[1][1])
		&& (board[1][1] == board[2][2])
		&& (board[1][1] != ' '))
		return board[1][1];
	if ((board[0][2] == board[1][1])
		&& (board[1][1] == board[2][0])
		&& (board[1][1] != ' '))
		return board[1][1];
	if (is_full(board, row, col))
	{
		return 'q';
	}
	return ' ';
}
