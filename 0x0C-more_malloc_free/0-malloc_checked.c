#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory.
 *	Exits with status 98 if allocation fails.
 */

void *malloc_checked(unsigned int b)
{
	int *v;

	v = malloc(b);
	if (v == NULL)
	exit(98);
	return (v);
}
