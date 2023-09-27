#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a program that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the bytes
 * Return: pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*a == *s)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
