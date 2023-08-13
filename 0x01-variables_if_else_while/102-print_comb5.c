#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c program that print all possible
 *              combinations of two-digitgs
 *
 * Return: Alwasy 0 (success)
*/

int main(void)
{
	int x = 0, y;

	while (x < 100)
	{
		y = x;
		while (y < 100)
		{
			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);

				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
