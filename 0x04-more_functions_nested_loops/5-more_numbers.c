#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
*/

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 11; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
