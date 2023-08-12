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
	char x;

	for (x = '0'; x < 10; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
