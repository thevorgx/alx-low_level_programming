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
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (s + j);
		j++;
	}
	return ('\0');
}
