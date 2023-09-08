#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Program entry point
 * Return: 0 indicates success
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	char first[] = "Last digit of ";
	
	if (l > 5)
		printf("%s %d is %d and is greater than 5\n",first, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", first, n, l);
	else
		printf("%s %d is less than 6 and not 0\n", first, n);
	return (0);
}
