#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *resmem;

	if (nmemb == 0 || size == 0)
	return (NULL);

	resmem = malloc(nmemb * size);

	if (resmem == NULL)
	return (NULL);

	memset(resmem, 0, nmemb * size);

	return (resmem);
}
