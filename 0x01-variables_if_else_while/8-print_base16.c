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
	char x;
	char y = 'a';

	for (x = '0'; x < 10; x++)
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
