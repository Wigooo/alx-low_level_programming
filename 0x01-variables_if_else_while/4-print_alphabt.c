#include <stdio.h>

/**
 * main - Entry poitn
 *
 * Description: A C program that print the alphabet except,
 *              q and e
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
