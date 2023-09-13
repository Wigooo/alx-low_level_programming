#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: int
 *
 * @argv: pointer to pointer
 *
 * Return: int
*/

int main(int argc, char **argv)
{
	char *x = (char *)main;
	int y;

	if (argc != 2)
		printf("Error\n"), exit(1);
	y = atoi(argv[1]);
	if (y < 0)
		printf("Error\n"), exit(2);

	while (y--)
	{
		printf("%02hhx%s", *x++, y ? " " : "\n");
	}
	return (0);
}
