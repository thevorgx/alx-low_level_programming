#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 *
 * @*s: A pointer to the string to be searched.
 * @c: The character to locate within the string.
 *
 * Return: A pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	return (s + i);

	i++;
	}
	return ('\0');
}
