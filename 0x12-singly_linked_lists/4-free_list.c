#include "lists.h"

/**
 * free_list - freee the list
 *
 * @head: pointer
 *
 * Return: no
*/

void free_list(list_t *head)
{
	list_t *node, *noden;

	if (!head)
		return;
	node = head;
	while (node)
	{
		noden = node->next;
		free(nodee->str);
		free(node);
		node = noden;
	}
}
