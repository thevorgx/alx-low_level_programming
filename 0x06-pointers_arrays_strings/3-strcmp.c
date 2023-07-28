#include "main.h"
/**
 * _strcmp - comparing str values
 * @s1: param s1 val
 * @s2: param s2 val
 * Return: s1 and s2 in for loop
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	}
	return (0);
}
