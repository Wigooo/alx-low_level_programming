#include "main.h"

/**
 * _realloc - allocates
 *
 * @ptr: pointer
 *
 * @old_size: unsigned int
 *
 * @new_size: unsinged int
 *
 * Return: no
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		x = malloc(new_size);

		if (x == NULL)
			return (NULL);

		return (x);
	}
	if (new_size > old_size)
	{
		x = malloc(new_size);

		if (x == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)x + a) = *((char *)ptr + a);
		free(ptr);
	}

	return (x);
}
