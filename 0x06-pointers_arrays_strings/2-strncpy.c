#include "main.h"

/**
 * _strncpy - copies an inputte number of bytes
 * @dest: the buffer storing the string to be copied
 * @src: the source string
 * @n: the maximum number of bytes to be copied
 * Return: a pointer to results
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = '\0';

	return (dest);
}
