#include "main.h"
#include <stdio.h>

/**
 * print_rev - a program that prints the reverse of a string
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	for (a -= 1; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
