#include <stdio.h>
/**
 * main - A program that prints the size of different data types
 * Return: return 0 indicates success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %a byte(s)\n", sizeof(a));
	printf("Size of an int: %b byte(s)\n", sizeof(b));
	printf("Size of a long int: %c byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a flat: %f byte(s)\n", sizeof(f));
}
