#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{	
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}
	return (new_node);
}

