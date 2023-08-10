#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates 2 strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: string length.
 * Return: pointer to concatenated string and NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conca;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	conca = (char *)malloc(len1 + n + 1);

	if (conca == NULL)
		return (NULL);

	strcpy(conca, s1);
	strncat(conca, s2, n);

	return (conca);
}
