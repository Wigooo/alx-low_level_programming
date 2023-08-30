#include "main.h"

/**
 * the_last - return last index
 *
 * @s: pointer
 *
 * Return: last index
*/

int is_palindrome(char *s);
int checking(char *s, int x, int y, int z);
int the_last(char *s)
{
	int a = 0;

	if (*s > '\0')
	{
		a += the_last(s + 1) + 1;
	}

	return (a);
}

/**
 * is_palindrome - check if string is palindrome
 *
 * @s: pointer
 *
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int b = the_last(s);

	return (checking(s, 0, b - 1, b % 2));
}

/**
 * checking - check for palindrome
 *
 * @s: pointer
 *
 * @x: int moves from right to left
 *
 * @y: moves from left to righy
 *
 * @z: int
 *
 * Return: 0 or 1
*/

int checking(char *s, int x, int y, int z)
{
	if ((x == y && z != 0) || (x == y + 1 && z == 0))
	{
		return (1);
	}
	else if (s[x] != s[y])
	{
		return (0);
	}
	else
		return (checking(s, x + 1, y - 1, z));
}
