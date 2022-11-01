#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int dex = 0, j;

	for (; dex < 8;  dex++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[dex][j]);
		_putchar('\n');
	}
}
