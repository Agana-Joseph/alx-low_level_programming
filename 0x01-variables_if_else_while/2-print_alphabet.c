#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
*Discription: Print the alphabet in lowercase
*
*Return: Always 0
*/
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		++abc;
	}
	putchar('\n');

	return (0);
}
