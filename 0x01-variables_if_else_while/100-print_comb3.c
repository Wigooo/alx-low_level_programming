#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c program that print all
 *              possible outvoems of 2 digits
 *
 * return: Always 0 (success)
*/

int main(void)
{
	int x = 0, y;

	while (x < 10)
	{
		y = 0;
		
		while (y <10)
		{
			if (x != y && x < y)
			{
				putchar(x + 48);
				putchar(y + 48);

				if (x + y != 17)
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
