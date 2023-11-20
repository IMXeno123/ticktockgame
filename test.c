#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "game.h"


int main()
{
	int is_start = 0;
	do
	{
		startui();
		int b = scanf("%d", &is_start);
		switch (is_start)
		{
		case 1:
			printf("tick-tock\n");
			break;
		case 0:
			printf("bye! \n");
			break;
		default:
			printf("only input 0 or 1!\n");
			break;
		}
	} while (is_start);
	return 0;
}