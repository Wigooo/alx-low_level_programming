#include "function_pointers.h"

/**
 * array_iterator - iterate an array
 *
 * @array: pointer
 *
 * @size: size_t
 *
 * @action: pointer
 *
 * Return: no
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size + 1;

	if (array && size && action)
	{
		while (array <= x)
		{
			action(*array++);
		}
	}
}
