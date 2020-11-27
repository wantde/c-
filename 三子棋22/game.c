#define _CRT_SECURE_NO_WARNINGS 1
# include"game.h"

void lnitboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] =' ';
		}
	}
}


void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c |", board[i][j]);
			
		}
		printf("\n");
		
		for (j = 0; j < COL; j++)
		{
			printf("---|");
		}
		printf("\n");
	}


}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走→");
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
		if (x >=1 && x <= row && y >=1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ') 
			{
				board[x - 1][y - 1] = '*';
				break;
            }
			else
			{
				printf("该坐标已经被占用");
			}

		}
		else {
			printf("坐标不合法");
		}
	}
}
void player2move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家2走→");
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("该坐标已经被占用");
			}

		}
		else {
			printf("坐标不合法");
		}
	}
}
int full(char board[ROW][COL], int row, int col)
{
	int k = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				k++;
		}
	}
	return k;
}


char iswin(char board[ROW][COL], int row, int col)
{
	
		int i = 0;
		for (i = 0; i < row; i++)
		{
			printf("%c%c%c", board[i][0], board[i][1], board[i][2]);
			if (board[i][0]== board[i][1]&&board[i][1] == board[i][2] &&board[i][1]!=' ')
			{
			
					return board[i][1];
					break;
            }
		}
		int j = 0;
			for (j= 0; j< col; j++)
			{
				if (board[0][j] == board[1][j]&& board[1][j] == board[2][j] && board[1][j] != ' ')
				{

					return board[1][j];
					break;
				}
			}
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			{
				return board[1][1];
			}
			else if (board[0][2] == board[1][1]&& board[1][1] == board[2][0] && board[1][1] !=' ')
			{
				return board[1][1];
			}
			else if (full(board, ROW, COL) == 0)
			{

				return 'a';
			}
			else
				return 'c';
}
		