#include "main.h"

/**
 * _memcpy - copies a given number of bytes from one memory location to another
 *
 * @dest: Pointer to the destination memory area to copy to
 * @src: Pointer to the source memory area to copy from
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
	dest[j] = src[j];
	j++;
	}

	return (dest);
}
