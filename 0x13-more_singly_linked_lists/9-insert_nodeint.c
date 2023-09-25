#include "lists.h"

/**
 * insert_nodeint_at_index - same as title
 *
 * @head: pointer
 * @idx: int
 * @n: int
 *
 * ReturnL listint
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *noden = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !noden)
		return (NULL);

	noden->n = n;
	noden->next = NULL;
	if (!idx)
	{
		noden->next = *head;
		*head = noden;
		return (noden);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			noden->next = node->next;
			node->next = noden;
			return (noden);
		}
		i++;
		node = node->next;
	}
	free(noden);
	return (NULL);
}
