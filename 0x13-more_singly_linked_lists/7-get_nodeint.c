#include "lists.h"

/**
 * get_nodeint_at_index = the same title
 *
 * @head: pointer
 * @index: int
 *
 * Return: list int
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int x;

	for (n = head, x = 0; n && x < index; n = n->next, x++)
		;
	return (n);
}
