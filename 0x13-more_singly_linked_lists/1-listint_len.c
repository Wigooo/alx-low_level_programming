#include "lists.h"

/**
 * listint_len - list length og int
 *
 * @h: pointer
 *
 * Return: size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
