#include "lists.h"

/**
 * pop_listint - pop list int
 *
 * @head: pointer
 *
 * Return: int
*/

int pop_listint(listint_t **head)
{
	listint_t *n;
	int x;

	if (!head || !*head)
		return (0);

	n = (*head)->next;
	x = (*head)->x;
	free(*head);
	*head = n;
	return (x);
}
