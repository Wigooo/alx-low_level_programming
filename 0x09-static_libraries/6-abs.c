#include "main.h"

/**
 * _abs - compute absolute of integer
 *
 * @n: takes integer type input
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
