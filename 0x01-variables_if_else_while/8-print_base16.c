#include <stdio.h>
/**
*main - Entry point
*
*Discription: prints hexadecimal base 0123456789abcdef, using putchar
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num = '0';
	int abc = 'a';

	while (num <= '9') /*print 0-9*/
	{
		putchar(num);
		num++;
	}

		while (abc <= 'f') /*print a-f*/
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');

	return (0);
}
