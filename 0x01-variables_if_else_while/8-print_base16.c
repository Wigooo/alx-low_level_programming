#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that type the base 16 chars
 *
 * Return: ALways 0 (success)
*/

int main(void)
{
	char x = '0';
	char y = 'a';

	while (x < 10)
	{
		putchar(x);
		x++;
	}

	while (y < 'g')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
