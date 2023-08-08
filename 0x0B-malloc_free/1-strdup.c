#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 ** _strdup - Duplicate a string.
 ** @str: Source string.
 **
 ** Return: (NULL) if str is NULL or allocation fails, else pointer to duplicated string.
 **/
char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);

	int len = string_length(str);

	char *dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	return (NULL);

	for (int i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 ** string_length - Calculate string length.
 ** @str: Pointer to the string.
 ** Return: (Length) of the string.
 **/
int string_length(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
