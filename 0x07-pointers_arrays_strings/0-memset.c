#include "main.h"
/**
 * _memset - a program that fills memory with a constant byte
 * @n: memory to be filled
 * @s: pointer to memory area
 * @b: constant byte
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
