#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 *
 * @a: pointer
 *
 * @size: size of the diagonal
*/

void print_diagsums(int *a, int size)
{
	int x, a1 = 0, a2 = 0;

	for (x = 0; x < size; x++)
	{
		a1 += a[x * size + x];
		a2 += a[x * size + (size - x - 1)];
	}
	printf("%d, ", a1);
	printf("%d\n", a2);

}
