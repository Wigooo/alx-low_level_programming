#include "lists.h"

/**
 * free_listint - free the list
 * 
 * @head: pointer
 *
 * Return: no
*/

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
