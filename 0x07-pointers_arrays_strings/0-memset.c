#include "main.h"

/**
 * *_memset - fills memory with constant byte
 *
 * @s: pointer
 *
 * @b: constant
 *
 * @n: max byte
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}

	return (s);
}
