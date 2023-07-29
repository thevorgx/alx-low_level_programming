#include "main.h"

/**
 * *cap_string -	function that capitalizes all words of a string
 *
 * @str: str param
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;

	for (j = 0; j < 13; j++)
	{
	if (str[i - 1] == sep[j - 1])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	}
	}

	i++;
	}

	return (str);
}
