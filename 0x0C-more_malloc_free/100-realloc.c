#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: The old size of the memory block in bytes.
 * @new_size: The new size of the memory block in bytes.
 *
 * Return: A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;
	unsigned int i;

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	return (malloc(new_size));

	/* If new_size is 0, equivalent to free(ptr) */
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	/* If new_size equals old_size, no reallocation needed */
	if (new_size == old_size)
	return (ptr);

	/* Allocate new memory block */
	new_ptr = malloc(new_size);

	/* If malloc fails, return NULL */
	if (new_ptr == NULL)
	return (NULL);

	/* Copy content from old ptr to new_ptr */
	if (new_size > old_size)
	new_size = old_size;

	for (i = 0; i < new_size; i++)
	*((char *)new_ptr + i) = *((char *)ptr + i);

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
