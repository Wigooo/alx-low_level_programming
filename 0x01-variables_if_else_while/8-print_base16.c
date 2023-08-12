#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the base 16 characters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;
	char y = 'a';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	while (y < 'g')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
