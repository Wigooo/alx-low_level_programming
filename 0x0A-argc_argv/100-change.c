#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: int
 *
 * @argv: pointer
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, centslast = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (cash >= cents[x])
			{
				centslast += cash / cents[x];
				cash = cash % cents[x];
				if ((cash & cents[x]) == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", centslast);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
