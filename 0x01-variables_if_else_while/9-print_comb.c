#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that write all combinations of digit
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int  x = 0;

	while (x < 10)
	{
		putchar(x + 0);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}

		x++;
	}
	putchar('\n');

	return (0);
}
