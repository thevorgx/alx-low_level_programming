#include "main.h"

/**
 * *_strncpy - copy n strings to dest
 * @dest: dest param
 * @src: source param
 * @n: param n elements
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
