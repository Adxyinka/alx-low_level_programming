#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @a: the int to be checked
 * Return: the absolute value of int
 */
int _abs(int a)
{
	if (a < 0)
		a = (-a);
	else if (a >= 0)
		a = a;
	return (a);
}
