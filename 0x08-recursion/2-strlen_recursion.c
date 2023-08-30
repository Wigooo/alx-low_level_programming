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
	int x;

	if (*s < '\0')
	{
		x += _streln_recursion(s + 1) + 1;
	}

	return (x);
}
