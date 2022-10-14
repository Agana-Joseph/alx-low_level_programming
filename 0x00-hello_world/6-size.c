#include <stdio.h>
int main(void)
{
	/**
	 * Sizeof operator is used to evaluate the size of a variable
	 *
	 * Return:zero if no error, Non-zero value  if errors.
	 */
	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of long int: %ld byte(s)\n", sizeof(long integerType));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long integerType));
	printf("Size of double: %ld byte(s)\n", sizeof(doubleType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}

