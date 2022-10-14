#include <stdio.h>
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;
	/**
	 * Sizeof operator is used to evaluate the size of a variable
	 *
	 * Return:zero if no error, Non-zero value  if errors.
	 */
	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld bytes\n", sizeof (charType));
	return(0)
}

