#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program write numbers from 0 to 9
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
