#include "function_pointers.h"

/**
 * int_index - index int
 *
 * @array: pointer
 *
 * @size: int
 *
 * @cmp: pointer
 *
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
