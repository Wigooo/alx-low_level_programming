#include "main.h"

/**
 * main - entry point
 *
 * Description: A C program that print a to z
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');

	return (0);
}
