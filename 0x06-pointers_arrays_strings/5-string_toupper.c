#include "main.h"

/**
 * *string_toupper - function that changes letters of a string to uppercase
 *
 * @str: pointer
 *
 * Return: the uppercase string
*/

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}
