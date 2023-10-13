#include "lists.h"

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
