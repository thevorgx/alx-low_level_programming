#include "lists.h"
/**
 * get_dnodeint_at_index - return the node at an index of a doubly linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to find (start from 0).
 *
 * Return: The node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			return (current);
		}

		current = current->next;
	}

	return (NULL);
}
