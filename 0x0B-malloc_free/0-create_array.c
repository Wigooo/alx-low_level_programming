#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: int
 *
 * @c: char
 *
 * Return: char
*/

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (0);
	}

	while (size--)
	{
		x[size] = c;
	}

	return (x);
}
