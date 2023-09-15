#include "variadic_functions.h"

/**
 * sum_them_all - sums varianble
 *
 * @n: no.
 *
 * @...: int
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	int i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
