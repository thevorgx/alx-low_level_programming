#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 *
 * @s: A pointer to the string to be searched.
 * @c: The character to locate within the string.
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *	or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
	if (s[index] == c)
	return (s + index);

	index++;
	}
	return ('\0');
}
