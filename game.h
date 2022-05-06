#pragma once
#include <stdio.h>
#include <time.h>
#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row , int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

//电脑下棋
//找空白的位置随机下
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏输赢
char IsWin(char board[ROW][COL], int row, int col);