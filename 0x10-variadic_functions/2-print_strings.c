#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: char
 *
 * @n: int
 *
 * @...: int
 *
 * Return: no
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *x;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (x = va_arg(ap, char *)) ? x : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
