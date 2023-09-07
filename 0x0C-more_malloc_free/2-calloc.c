#include "main.h"

/**
 * _memset - fill memory with const
 *
 * @s: pointer
 *
 * @b: char
 *
 * @n: unsigned int
 *
 * Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - allocat memory for an array using malloc
 *
 * @nmemb: unsigned int
 *
 * @size: unsinged int
 *
 * Return: no
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(sizeof(int) * nmemb);

	if (x == 0)
		return (NULL);

	_memset(x, 0, sizeof(int) * nmemb);

	return (x);
}
