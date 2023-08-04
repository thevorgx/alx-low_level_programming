#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 *
 * @s: A pointer to the string to be searched.
 * @c: The character to locate within the string.
 *
 * Return: A pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
