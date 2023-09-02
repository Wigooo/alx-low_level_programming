#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: int
 *
 * @argv: pointer
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\m");
		return (1);
	}

	return (0);
}
