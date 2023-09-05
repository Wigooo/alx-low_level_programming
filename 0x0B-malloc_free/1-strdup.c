#include "main.h"

/**
 * _strdup -  returns a pointer to a
 * newly allocated space
 *
 * @str: pointer
 *
 * Return: char
*/

char *_strdup(char *str)
{
	int x = 0;
	int y = 0;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[y] != '\0'; y++)
	;

	z = malloc(y * sizeof(*str) + 1);

	if (z == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < y; x++)
		{
			z[x] = str[x];
		}
	}

	return (z);
}
