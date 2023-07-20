#include "main.h"

/**
 * _isupper - checks for lower case char
 * @c: the char from the proto to verify
 * Return: 1 for uppercase chars and 0 for else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
