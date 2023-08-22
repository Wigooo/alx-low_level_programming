#include "main.h"

/**
 * puts_half - print half of string with new line
 *
 * @str: input
*/

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;

	x++;
	for (x = x / 2; str[x] != '\0'; x++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
