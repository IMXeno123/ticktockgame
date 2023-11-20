#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void startui()
{
	char arr[4][40] = { 0 };
	int cellsize = sizeof(arr) / sizeof(arr[0]);
	int columnsize = sizeof(arr[0]) / sizeof(arr[0][0]);
	char play[10] = " 1. play  ";
	char exit[10] = " 0. exit  ";
	for (int i = 0; i < cellsize; i++)
	{
		for (int j = 0; j < columnsize; j++)
		{
			if (j == columnsize - 1)
			{
				arr[i][j] = '\n';
			}
			else
			{
				arr[i][j] = '*';
			}
		}

	}
	for (int i = 0; i < columnsize; i++)
	{
		if (i < 10)
		{
			arr[1][i + 15] = play[i];
			arr[2][i + 15] = exit[i];
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < cellsize; i++)
	{
		for (int j = 0; j < columnsize; j++)
		{
			printf("%c", arr[i][j]);
		}

	}
	printf("select to start: ");
}