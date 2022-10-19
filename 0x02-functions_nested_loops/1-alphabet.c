#include "main.h"
/**
*print_alphabet - print the alphabet in lowercase followed by a new line
*
*Return 0 on success
*/
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);

		_putchar('\n');
}
