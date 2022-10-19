#include "main.h"
#include <unistd.h>
/**
*_putchar write c to stdout
*&c: the character to print
*
*Return: On 0 seccess
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}
