#define ROW 3  //ROW��
#define COL 3  //COL�� 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayB0ard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//��������������Ϸ��״̬ ��IsWin��������һ���ַ����ж�����һ��״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//˭Ҳû��Ӯ��������Ϸ - 'C'


char IsWin(char board[ROW][COL], int row, int col);



