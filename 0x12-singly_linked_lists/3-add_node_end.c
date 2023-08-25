#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: Pointer to the string to be added.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

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

