#include "main.h"

/**
 * print_last_digit - print last digit of no
 *
 * @x: takes number
 *
 * Return: last digit
*/

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		y = -1 * (x % 10);
	else
		y = x % 10;

	_putchar(y + '0');
	return (y);
}
