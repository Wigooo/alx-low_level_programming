#include "main.h"

/**
 * array_range - create an array of int
 *
 * @min: int
 *
 * @max: int
 *
 * Return: int
*/

int *array_range(int min, int max)
{
	int x, y;
	int *a;

	if (min > max)
		return (NULL);

	x = max - min + 1;

	a = malloc(sizeof(int) * x);

	if (!a)
		return (NULL);

	for (y = 0; y < x; y++)
	{
		a[y] = min++;
	}

	return (a);
}
