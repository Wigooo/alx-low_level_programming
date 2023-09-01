#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: the string
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
		x++;

	return (x);
}
