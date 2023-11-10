#include "lists.h"

/**
 * add_dnodeint - add node
 *
 * @head: pointer
 * @n: int
 *
 * Return: dlistint
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->newt = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
