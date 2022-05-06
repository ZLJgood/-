#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

 void menu()
{
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");
}
 void game()
 {
	 char board[ROW][COL] = { 0 };
	 //初始化棋盘的函数
	 InitBoard(board, 3, 3);
	 DisplayBoard(board,ROW,COL);
	 //下棋
	 char ret;
	 while (1)
	 {
		 //玩家下棋
		 PlayMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //判断输赢
		 ret = IsWin(board, ROW, COL);
		 if (ret != 'c')
			 break;
		 //电脑下棋
		 ComputerMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //判断输赢
		  ret = IsWin(board, ROW, COL);
		 if (ret != 'c')
			 break;
	 }
	 if (ret != 'x')
	 {
		 printf(" 玩家赢了\n");		
	 }
	 else if (ret != '#')
	 {
		 printf("电脑赢了\n");		
	 }
	 else
	 {
		 printf("平局\n");		
	 }
	 DisplayBoard(board, ROW, COL);
 }
int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
		default:
			printf("选择错误！");
			break;
		}
	} while (input);
	return 0;
}