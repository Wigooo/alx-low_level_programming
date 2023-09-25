#include "lists.h"

/**
 * add_nodeint - add node int
 *
 * @head: pointer
 * @n: int
 *
 * Return: list int
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *noden = malloc(sizeof(listint_t));

	if (!head || !noden)
		return (NULL);

	noden->next = NULL;
	noden->n = n;
	if (!head)
		noden->next = *head;
	*head = noden;
	return (noden);
}
