#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()//封装一个菜单函数
{
	printf("***********************************\n");
	printf("**********    1. play    **********\n");
	printf("**********    2. exit    **********\n");
	printf("***********************************\n");
}
void game()//game函数
{
	//雷的信息存储
	//1.布置好雷的信息
	char mine[ROWS][COLS] = { 0 };//11 * 11
	//2.派查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine,show,ROW,COL);
}
void test()//测试的游戏函数
{
	int input = 0;
	srand((unsigned int)time(NULL));//rand函数使用前需要调用srand函数
	do//玩一把再玩一把用do.....while
	{
		menu();//调用菜单函数
		printf("请选择:>");
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
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);//为什么选择input，因为选择input，case 1 玩完游戏，break跳出为1；再玩一把。case 0 玩完游戏，break跳出为0；不在循环。default为非0，非0为真依然会跳上去让你选择。
}
int main()
{
	test();
	return 0;
}