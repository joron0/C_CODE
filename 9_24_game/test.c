#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()//��װһ���˵�����
{
	printf("***********************************\n");
	printf("**********    1. play    **********\n");
	printf("**********    2. exit    **********\n");
	printf("***********************************\n");
}
void game()//game����
{
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11 * 11
	//2.�ɲ�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);
}
void test()//���Ե���Ϸ����
{
	int input = 0;
	srand((unsigned int)time(NULL));//rand����ʹ��ǰ��Ҫ����srand����
	do//��һ������һ����do.....while
	{
		menu();//���ò˵�����
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//Ϊʲôѡ��input����Ϊѡ��input��case 1 ������Ϸ��break����Ϊ1������һ�ѡ�case 0 ������Ϸ��break����Ϊ0������ѭ����defaultΪ��0����0Ϊ����Ȼ������ȥ����ѡ��
}
int main()
{
	test();
	return 0;
}