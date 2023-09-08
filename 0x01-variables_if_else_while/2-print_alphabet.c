#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 indicates success
 */
int main(void)
{
	char currentChar = 'a';

	while (currentChar <= 'z')
	{
		putchar(currentChar);
		currentChar++;
	}
	putchar('\n');
	return (0);
}
