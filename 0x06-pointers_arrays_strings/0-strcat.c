#include "main.h"
#include <string.h>

/**
 * *_strcat - a program that concatenates two strings
 * @dest: first string
 * @src: second string
 * return: returns a point to the restulting strig dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
