#include "lists.h"

/**
 * delete_nodeint_at_index - title
 *
 * @head: pointer
 * @index: int
 *
 * Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *nodep;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (x == index)
		{
			nodep->next = node->next;
			free(node);
			return (1);
		}
		x++;
		nodep = node;
		node = node->next;
	}
	return (-1);
}
