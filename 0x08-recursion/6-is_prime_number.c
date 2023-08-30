#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if no. is prime
 * @n: int
 *
 * @x: int
 *
 * Return: 0 or 1
*/

int prime(int n, int x);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - check all no. < n if they are prime
 *
 * @n: int
 *
 * @x: int
 *
 * Return: prime
*/

int prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime(n, x + 1));
}
