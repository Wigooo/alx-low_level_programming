#include "main.h"

/**
 * print_diagonal - print a diagonal staight line
 *
 * @n: straight line size
*/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
