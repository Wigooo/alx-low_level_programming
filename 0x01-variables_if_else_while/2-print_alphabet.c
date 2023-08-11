#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c Program that write the alphabet
 *
 * return: 0 (success)
*/

int main(void)
{
	char x = 'a';

	while (x < 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
