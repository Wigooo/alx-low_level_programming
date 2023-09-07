#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: int
 *
 * Return: no
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	{
		exit(98);
	}

	return (x);
}
