#include "main.h"

/**
 * _strlen_recursion - print lenght of string
 *
 * @s: pointer
 *
 * Return: lenght
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s < '\0')
	{
		x += _strlen_recursion(s + 1) + 1;
	}

	return (x);
}
