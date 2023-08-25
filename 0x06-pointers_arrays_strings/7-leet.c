#include "main.h"

/**
 * *leet - encodes a string into 1337
 *
 * @x: pointer
 *
 * Return: 1337
*/

char *leet(char *x)
{
	char *y = x;
	char z[] = {'A', 'E', 'O', 'T', 'L'};
	int a[] = {4, 3, 0, 7, 1};
	unsigned int b;

	while (*x)
	{
		for (b = 0; b < sizeof(z) / sizeof(char); b++)
		{
			if (*x == z[b] || *x == z[b] + 32)
			{
				*c = 48 + a[b];
			}
		}
		x++;
	}

	return (y);
}
