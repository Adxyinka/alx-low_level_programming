#include "main.h"
/**
 * _isupper - a program that checks for uppercase character
 * @c: character to be checked
 * Return: 1 for success, 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
