#include "lists.h"

/**
 * list_len - list the length
 *
 * @h: pointer
 *
 * Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
