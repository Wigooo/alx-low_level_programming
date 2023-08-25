#include "main.h"

/**
 * reverse_array -function that reverses the content of an array of integers.
 *
 * @a: pointer
 *
 * @n: no. of elementes of array
*/

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
