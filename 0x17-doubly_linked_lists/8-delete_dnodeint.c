#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a position.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if  success, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	tmp = current->prev;
	tmp->next = current->next;

	if (current->next != NULL)
		current->next->prev = tmp;

	free(current);
	return (1);
}
