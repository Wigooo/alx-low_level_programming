#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 1; x < 11; x++)
	{
		for (y = 0; y < 15; y++)
		{
			z = y;
			if (y > 9)
			{
				_putchar(1 + 48);
				z = y % 10;
			}
			_putchar(z + 48);
		}
		_putchar('\n');
	}
}
