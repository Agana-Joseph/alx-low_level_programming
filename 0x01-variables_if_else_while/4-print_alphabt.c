#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0
*
*/
int main(void)
{

	char abc = 'a';

		while (abc <= 'z')
		{
			if (abc == 'e' || abc == 'q')
				++abc;
			putchar(abc);
			++abc;
		}
		putchar('\n');

		return (0);
}
