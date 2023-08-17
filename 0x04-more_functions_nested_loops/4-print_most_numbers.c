#include "main.h"

/**
 * print_most_numbers - print no.s from 0 to 9 except 2 and 4
*/

void print_most_numbers(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
