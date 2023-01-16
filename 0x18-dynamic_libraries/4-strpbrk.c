#include "main.h"

/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	int dex;

	while (*s)
	{
		for (dex = 0; accept[dex]; dex++)
		{
			if (*s == accept[dex])
				return (s);
		}
		s++;
	}
	return ('\0');
}
