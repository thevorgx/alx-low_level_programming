#include"main.h"

/**
 * *rot13 - encoding using Rot13
 *
 * @str: param str
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char *p1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
	j = 0;
	while (p1[j] != '\0')
	{
	if (str[i] == p1[j])
	{
	str[i] = p2[j];
	break;
	}
	j++;
	}

	i++;
	}

	return (str);
}
