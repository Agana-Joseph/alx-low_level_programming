#include "main.h"

/**
*print_line - draws a straight line in the terminal
*@n: input number of times to print '_'
*Return: a straight line
*/

void print_line(int n)
{
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; co <= n; col++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
