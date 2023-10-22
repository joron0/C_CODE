#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    //打印列号
    for (i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <=row; i++)//因为起始的从1开始，打印的棋盘时9*9的，而这里的棋盘是11*11坐标从1 1开始  第一行的最右边结束也是 1 9
    {
        printf("%d ", i);
        for (j = 1; j <=col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;
    while (count)//布置雷，每布置一个雷，count--
    {
        int x = rand() % row + 1;//1-9  随机值%9会产生1-8个数字，然后加1就能产生1-9个
        int y = rand() % col + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}
//字符  ‘1’- 字符 ‘0’= 1
//字符  ‘3’- 字符 ‘0’= 3
int get_mine_count(char mine[ROWS][COLS], int x, int y)//如果想知道选择的周围有几个雷的话相加就得到周围有几个雷
{
    //把周围几个坐标的大小加起来减去字符0得到有几个雷
    return mine[x - 1][y] +mine[x - 1][y - 1] + mine[x][y - 1] +mine[x + 1][y - 1] +
    mine[x + 1][y] +mine[x + 1][y + 1] +mine[x][y + 1] +mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    //排查雷的过程
    int x = 0;
    int y = 0;//x,y最大坐标都是9
    int win = 0;//9*9-10 = 71个位置不是雷
    while (win < row * col - EASY_COUNT)
    {
        printf("请输入排查雷的坐标:>");
        scanf("%d%d", &x, &y);//玩家手动输入一个坐标
        if (x >= 1 && x <= row && y >= 1 && y <= col)//如果输入的这个坐标合法
        {
            //坐标合法
            //1.踩雷
            if (mine[x][y] == '1')//如果踩雷就提醒他
            {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, row, col);//显示雷的信息给玩家
                break;
            }
            else//2.不是雷
            {
                //计算x,y的坐标周围有几个雷
                int count = get_mine_count(mine, x, y);//获取雷的个数
                show[x][y] = count + '0';//在里面放一个雷
                DisplayBoard(show, row, col);
                win++;
            }
        }
        else
        {
            printf("输入坐标非法，请重新输入！\n");
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        DisplayBoard(mine, row, col);
    }
}
//递归可以展开