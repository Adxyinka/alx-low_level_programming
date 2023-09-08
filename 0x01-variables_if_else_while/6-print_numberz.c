#include <stdio.h>
/**
 * main - A program that prints numbers of base 10 with putchar
 * Return: 0 indicates success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
