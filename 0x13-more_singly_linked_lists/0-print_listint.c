#include "lists.h"

/**
 * print_listint - print the list in int
 *
 * @h: pointer
 *
 * Return: size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n". h->n);
		h = h->next;
		x++;
	}
	return (x);
}
