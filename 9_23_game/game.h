#define ROW 3  //ROW行
#define COL 3  //COL列 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayB0ard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//告诉我们四种游戏的状态 用IsWin函数返回一个字符来判断是哪一个状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q'
//谁也没有赢，继续游戏 - 'C'


char IsWin(char board[ROW][COL], int row, int col);



