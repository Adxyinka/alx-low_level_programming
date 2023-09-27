#include <stddef.h>
#include "main.h"

/**
 * _strstr - a program that finds the first occurence of substring
 * @haystack: string to search in
 * @needle: substring to search for
 *Return: pointer to the beginning or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int c, d;

	if (*needle == 0)
		return (haystack);

	for (c = 0; haystack[c] != '\0'; c++)
	{
		for (d = 0; needle[d] != '\0'; d++)
		{
			if (haystack[c + d] != needle[d])
				break;
		}
		if (needle[d] == '\0')
			return (haystack + c);
	}

	return (NULL);
}
