#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: string
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				z = &s[x];
				return (z);
			}
			y++;
		}
		x++;
	}

	return (0);
}
