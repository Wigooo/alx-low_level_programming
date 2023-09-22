#include "lists.h"

/**
 * _strlen - return length
 *
 * @s: string
 *
 * Return: string
*/

int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - print the list
 *
 * @h: pointer
 *
 * Return: size_t
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
