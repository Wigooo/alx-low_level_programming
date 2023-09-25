#include "lists.h"

/**
 * add_nodeint_end - end of node int
 *
 * @head: pointer
 * @n: int
 *
 * Return: listint
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *noden = mallic(sizeof(listint_t));
	listint_t *node;

	if (!head || !noden)
		return (NULL);

	noden->next = NULL;
	noden->n = n;
	if (!head)
		*head = noden;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = noden;
	}
	return (noden);
}
