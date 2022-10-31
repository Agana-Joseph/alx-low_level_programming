#include "main.h"

/**
 * _strchr - locates a character in a string
 *  @s: string input
 *  @c: character to find
 *  Return: pointer to first occurence of c character
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
