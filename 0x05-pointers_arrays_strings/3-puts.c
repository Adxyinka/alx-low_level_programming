#include "main.h"
#include <stdio.h>

/**
 * _puts - a program that prints a string
 * @str: string to be printed
 * Return: prints value
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
