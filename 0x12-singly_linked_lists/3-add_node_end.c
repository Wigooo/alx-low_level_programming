#include "list.h"

/**
 * add_node_end - add node end
 *
 * @head: poiner
 * @str: pointer
 *
 * Return: list_t
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *noden = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !noden)
		return (NULL);
	if (str)
	{
		noden->str = strdup(str);
		if (!noden->str)
		{
			free(noden);
			return (NULL);
		}
		noden->len = _strlen(noden->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = noden;
	}
	else
		*head = noden;
	return (noden);
}
