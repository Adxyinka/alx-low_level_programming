#include "main.h"
#include <string.h>

/**
 * *_strncat - a program that concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
