#include "main.h"

/**
 * factorial - return factorial of no.
 *
 * @n: no. we get factorial
 *
 * Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
