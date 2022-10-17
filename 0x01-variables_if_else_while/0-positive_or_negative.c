#include <stdlib.h>
#include <time.h>
/**
* main - determine if number is positive or negative
*
* Discription: To asigne random number
*
*Return: Always 0(Sucess
*
* betty style doc for function main goes there
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > '0')
	{
		printf("%d is positive\n", n);
		}
	else if (n == '0')
	{
		printf("%d is zero\n", n);
		}
	else
	{
		printf("%d is positive\n", n);
		}
	return (0);
}
