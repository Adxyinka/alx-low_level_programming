#include "main.h"
/**
 * main - a program that prints the english alphabet
 * Return: 0 indicates success
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n);
}
