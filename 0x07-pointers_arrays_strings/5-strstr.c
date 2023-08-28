#include "main.h"

/**
 * *_strstr - locate substring
 *
 * @haystack: pointer
 *
 * @needle: pointer
 *
 * Return: Always 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}
