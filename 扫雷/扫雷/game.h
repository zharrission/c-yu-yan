#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1 
#ifndef __LEI_H__ 
#define __LEI_H__ 
#define ROW 10 
#define COL 10 
//������ 
void set_mine(char mine[ROW + 2][COL + 2], int row, int col);
//��ʾ���� 
void display(char mine[ROW + 2][COL + 2], int row, int col);
//ͳ���׵ĸ��� 
int get_mine_count(char board[ROW + 2][COL + 2], int x, int y);
//����Ϸ 
void play_game(char mine[ROW + 2][COL + 2], char board[ROW + 2][COL + 2]);
#endif