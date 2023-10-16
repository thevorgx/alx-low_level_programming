#include "main.h"

/**
 * _strpbrk - Finds the first occurrence of a byte from 'accept' in 's'
 *
 * @s: Input string
 * @accept: Set of bytes to search for
 *
 * Return: Pointer to the first matching byte, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int i = 0;

	while (s[j] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
				return (s + j);
			i++;
		}
		j++;
	}
	return ('\0');
}
