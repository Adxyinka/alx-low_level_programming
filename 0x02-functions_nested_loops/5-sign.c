#include "main.h"
/**
 * print_sign - a program that checks if an int is positive, 0 or negative
 * @n: the int that is being checked
 * Return: 1 if is greater, 0 if is zero, -1 if is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
