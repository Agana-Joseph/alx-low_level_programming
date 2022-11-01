#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int dex;

	while (*haystack != '\0')
	{
		dex = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, dex++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
