#include <stdio.h>

/**
 * add - adds
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/


int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - adds
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - adds
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - adds
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - adds
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
