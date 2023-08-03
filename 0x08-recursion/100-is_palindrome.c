#include "main.h"

/**
 * _strlen - Computes the length of a provided string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 2);
}
