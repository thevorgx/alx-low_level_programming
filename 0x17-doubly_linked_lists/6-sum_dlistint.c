#include "lists.h"
/**
 * sum_dlistint - Sums the elements of a doubly linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of elements , or 0 if the list empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int add = 0;
	int i;

	for (i = 0; current != NULL; i++)
	{
		add += current->n;
		current = current->next;
	}
	return (add);
}
