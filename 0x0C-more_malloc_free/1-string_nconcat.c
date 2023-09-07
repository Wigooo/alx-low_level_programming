#include "main.h"

/**
 * string_nconcat - conc two strings
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * @n: unsigned int
 *
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	int a, b, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	x = malloc(s1_length + n + 1);

	if (x == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		x[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		x[a] = s2[b];
		b++;
	}

	x[a] = '\0';
	return (x);
}
