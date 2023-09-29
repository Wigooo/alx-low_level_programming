#include "main.h"

/**
 * flip_bits - flip the bits
 *
 * @n: int
 * @m: int
 *
 * Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int y = 0;

	while (x)
	{
		if (x & 1ul)
			y++;
		x = x >> 1;
	}
	return (y);
}
