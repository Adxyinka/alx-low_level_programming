#include "main.h"

/**
 * print_most_numbers - a program that prints digit from 0-9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
