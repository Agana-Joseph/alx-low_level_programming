#include <main.h>

/**
 * print_diagsums - prints sum of #'s in diagnols of
 * @a: input square array
 * @size: size of one dimension in array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int dex1, dex2;

	for (dex1 = 0; a[dex1][7]; dex1++)
	{
		for (dex2 = 0; dex2 < 8; dex2++)
			_putchar(a[dex1][dex2]);

		_putchar('\n');
	}
}
