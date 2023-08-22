#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: the string
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
