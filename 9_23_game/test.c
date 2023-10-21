#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//测试模块
//玩完一把还可以再玩一把用do while循环
void menu()
{
	printf("********************************\n");
	printf("*****  1.play      0.exit  *****\n");
	printf("********************************\n");
}
//游戏的整个算法实现
void game()
{
	char ret = 0;
	 //创建数组  存放玩家和电脑走出的棋盘信息
	char board[ROW][COL] = { 0 };//希望这个数组里面全部是空格
	InitBoard(board, ROW, COL);//初始化棋盘
	//打印棋盘
	DisplayBoard(board,ROW,COL);//其实打印数组的内容
	while (1)//玩家和电脑下棋，直到赢了为止
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//  time函数返回的是time-t值然后用unsigned 转成int
	do
	{
		menu();
		printf("请选择：>");
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
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}