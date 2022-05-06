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
	 //��ʼ�����̵ĺ���
	 InitBoard(board, 3, 3);
	 DisplayBoard(board,ROW,COL);
	 //����
	 char ret;
	 while (1)
	 {
		 //�������
		 PlayMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //�ж���Ӯ
		 ret = IsWin(board, ROW, COL);
		 if (ret != 'c')
			 break;
		 //��������
		 ComputerMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //�ж���Ӯ
		  ret = IsWin(board, ROW, COL);
		 if (ret != 'c')
			 break;
	 }
	 if (ret != 'x')
	 {
		 printf(" ���Ӯ��\n");		
	 }
	 else if (ret != '#')
	 {
		 printf("����Ӯ��\n");		
	 }
	 else
	 {
		 printf("ƽ��\n");		
	 }
	 DisplayBoard(board, ROW, COL);
 }
int main()
{
	srand((unsigned int)time(NULL));//������������������
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
}