#include "lists.h"

/**
 * sum_listint - sum of the list
 *
 * @head: pointer
 * 
 * Return: int
*/

int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
