#include "main.h"
/**
 * _islower - a program that checks for lower case character
 * @c: is the character to be checked
 * Return: 1 if c is lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
