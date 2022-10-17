#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Discription print A-Z and a-z
*
*Return: Always 0
*/

int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	/*print a-z*/
	while (abc <= 'z')
	{
		putchar(abc);
		++abc;
	}

	/*print A-Z*/
	while (ABC <= 'Z')
	{
		putchar(ABC);
		++ABC;
	}

	return (0);
}
