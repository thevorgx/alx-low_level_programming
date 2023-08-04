#include "main.h"

/**
 * _isdigit -checks fo digits
 * @c: the char from the proto to verify
 * Return: 1 for digits and 0 for else
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
