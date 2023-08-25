#include "main.h"
#include <stdio.h>

/**
 * isLower - Determine wither ascii lowercase
 * @c: char
 * Return: 1 True, 0 False
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determine ascii delimeter
 * @c: char
 * Return: 1 True, 0 False
*/

int isDelimiter(char c)
{
	int x;
	char delimiter[] = " \t\n,.!?\"[]{}";

	for (x = 0; x < 12; x++)
		if (c == delimiter[x])
			return (1);
	return (0);
}

/**
 * *cap_string - capitalizes all words of a string
 *
 * @x: pointer
 *
 * Return: string
*/

char *cap_string(char *z)
{
	char *y = z;
	int foundDelimit = 1;

	while (*z)
	{
		if (isDelimiter(*z))
			foundDelimit = 1;
		else if (isLower(*z) && foundDelimit)
		{
			*z -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		z++;
	}
	return (y);
}
