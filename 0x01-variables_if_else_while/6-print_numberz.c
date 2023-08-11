#include <stduio.h>

/**
 * main - Entry point
 *
 * Description: A c program write numbers from 0 to 9
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
