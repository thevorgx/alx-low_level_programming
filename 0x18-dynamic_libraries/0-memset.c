#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: pointer to the beginning of the memory spot param
 * @b: The value of the byte param
 * @n: The number of bytes to fill param
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
