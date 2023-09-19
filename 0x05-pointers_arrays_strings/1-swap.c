#include "main.h"

/**
 * swap_int - a program that swaps two integers
 * @a: first integer tobe swapped
 * @b: second integer to be swapped
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
