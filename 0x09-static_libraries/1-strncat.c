#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: no. of bytes
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';

	return (dest);
}
