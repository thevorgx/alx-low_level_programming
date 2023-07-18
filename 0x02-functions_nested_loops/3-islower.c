#include "main.h"

/**
 * _islower -> check for lower case char
 * @c: the char to check
 * int _islower(int c) - take the output of this function and see
 * if its lowercase using ASCII
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
