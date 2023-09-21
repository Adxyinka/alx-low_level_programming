#include "main.h"

/**
 * string_toupper - changes lowercase in a string to uppercase
 * @str: the string to be changed
 * Return: a pointer to change loops
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
