#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c Program that write the alphabet
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
