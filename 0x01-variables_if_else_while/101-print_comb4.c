#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that print all
 *              possible outcomes of numbers combinations.
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	int x = 0;
	int y, z;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = 0;
			while (z < 10)
			{
				if (x != y && x < y && y != z && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);

					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
