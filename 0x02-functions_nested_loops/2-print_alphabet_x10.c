#include "main.h"
/**
 * print_alphabet_x10 - a program that prints the english alphabet
 * Return: 0 indicates success
 */
void print_alphabet_x10(void)
{
        char alph;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph ++)
		{
			_putchar(alph);
		}

		_putchar('\n');
		i++;
	}
}
