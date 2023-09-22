#include "list.h"

/**
 * add_node - add a node
 *
 * @head: pointer
 * @str: char
 *
 * Return: size
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *headn = malloc(sizeof(list_t));

	if (!head || !headn)
	{
		return (NULL);
	}
	if (str)
	{
		headn->str = strdup(str);
		if (!headn->str)
		{
			free(headn);
			return (NULL);
		}
		headn->len = _strlen(headn->str);
	}

	headn->next = *head;
	*head = headn;
	return (headn);
}
