#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @x: pointer
 *
 * Return: string
*/

char *cap_string(char *x)
{
	char *y = x;
	int foundDelimit = 1;

	while (*x)
	{
		if (isDelimiter(*x))
			foundDelimit = 1;
		else if (isLower(*x) && foundDelimit)
		{
			*x = *x - 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		x++;
	}
	return (y)
}
