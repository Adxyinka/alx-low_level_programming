#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 indicates success
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (char a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
