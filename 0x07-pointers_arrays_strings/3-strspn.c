#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int dex;
	
	while (*s)
	{
		for (dex = 0; accept[dex]; dex++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[dex + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
