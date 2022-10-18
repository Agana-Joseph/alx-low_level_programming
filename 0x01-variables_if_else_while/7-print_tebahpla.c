#include <stdio.h>
/**
*main - Entry point
*
*Discription: print letters in reverse z-a
*
*Return: 0 (success)
*/
int main(void)
{
	int zee = 'z';

		while (zee >= 'a')
		{
			putchar(zee);
			zee--;
		}
	putchar('\n');

		return (0);


}
