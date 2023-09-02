#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: int
 *
 * @argv: pointer
 *
 * Return: always 0
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
