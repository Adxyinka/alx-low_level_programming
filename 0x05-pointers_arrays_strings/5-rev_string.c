#include "main.h"
#include <string.h>
/**
 * rev_string - a program that reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s + strlen(s) - 1;

	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
