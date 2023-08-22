#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string
*/

void rev_string(char *s)
{
	int x, y;
	char z;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (y = 0; y < x / 2; y++)
	{
		z = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = z;
	}
}
