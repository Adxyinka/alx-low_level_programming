#include <stdio.h>
/**
 * main - a program that prints the alphabet in reverse
 * Return: 0 indicates success
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
