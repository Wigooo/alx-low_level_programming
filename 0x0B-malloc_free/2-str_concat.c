#include "main.h"

/**
 * length_of_str - find lenght of string
 *
 * @s: string
 *
 * Return: int
*/

int length_of_str(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - concatenates two strings.
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * Return: char
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *z;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	a = length_of_str(s1);
	b = length_of_str(s2);
	z = malloc((a + b) * sizeof(char) + 1);

	if (z == 0)
		return (0);

	for (c = 0; c <= a + b; c++)
	{
		if (c < a)
			z[c] = s1[c];
		else
			z[c] = s2[c - a];
	}
	z[c] = '\0';

	return (z);
}
