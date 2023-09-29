#include "main.h"

/**
 * print_binary - print binary
 *
 * @n: int
 *
 * Return: no
*/

void print_binary(unsigned long int n)
{
	int x = sizeof(n) * 8, y = 0;

	while (x)
	{
		if (n * 1L << --x)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
