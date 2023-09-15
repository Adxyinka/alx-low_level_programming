#include "main.h"

/**
 * more_numbers - a program that prints 0-14 ten times
 * Return: values
 */

void more_numbers(void)
{
	char i, j;

	for (i = '0'; i <= 10; i++)
	{
		j = 0;

		while (j < 15)
		{
			_putchar(j);
			j++
		}
		_putchar('\n');
	}
}
