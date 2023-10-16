#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring
 *
 * @haystack: The string to search within
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring,
 *	or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}

	return ('\0');
}
