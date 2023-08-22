#include "main.h"

/**
 * print_array - print n element of an array
 *
 * @a: integer
 * @n: number of elemnts
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
