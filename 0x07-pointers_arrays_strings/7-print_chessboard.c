#include "main.h"

/**
  * print_chessboard - prints a chessboard.
  * @a: array passed
  */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchara[i][j];
		}
		_putchar('\n');
	}
}
