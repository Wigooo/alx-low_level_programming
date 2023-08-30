#include "main.h"

/**
 * _sqrt_recursion - return square root
 *
 *
 * @x: int
 * @y: int
 *
 * Return: square root
*/

int square(int x, int y);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find root
 *
 * @x: no to find square root
 *
 * @y: square root
 *
 * Return: root
*/

int square(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y < x)
	{
		return (square(x, y + 1));
	}
	else
		return (-1);
}
