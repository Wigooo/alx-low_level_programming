#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that print the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');

	return (0);
}
