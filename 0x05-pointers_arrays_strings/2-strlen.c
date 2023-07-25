#include"main.h"

/**
 * swap_int - check the code
 *@*s: pointer *s that we increment to be able to increment the value of len
 *@len: the value we want to return so we know the length of the string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		++len;
		++s;
	}
	return (len);
}
