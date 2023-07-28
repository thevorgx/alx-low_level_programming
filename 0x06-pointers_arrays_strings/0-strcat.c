#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: destination Param
 * @src: source param
 *
 * Return: Destination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return ();

}
