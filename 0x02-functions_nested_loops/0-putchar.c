#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c program that prints using putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(str[x]);
	_putchar('\n');

	return (0);
}
