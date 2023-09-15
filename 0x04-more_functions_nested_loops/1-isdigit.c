#include "main.h"
/**
 * _isdigit - a program that checks for a digit between 0 and 9
 * @c: digit to be checked
 * Return: 1 for success and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
