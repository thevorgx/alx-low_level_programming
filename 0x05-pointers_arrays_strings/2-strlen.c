#include"main.h"

/**
 *_strlen - check the code len
 *@s: pointer *s that we increment to be able to increment the value of len
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++len;
		++s;
	}
	return (len);
}
