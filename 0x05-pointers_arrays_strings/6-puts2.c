#include "main.h"

/**
 * puts2 - print all chars starting with first char with new line
 *
 * @str: input
*/

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
