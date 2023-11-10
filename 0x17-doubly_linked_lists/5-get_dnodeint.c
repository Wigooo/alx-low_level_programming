#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at the index
 *
 * @head: pointer
 * @index: int
 *
 * Return: dlistint
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
