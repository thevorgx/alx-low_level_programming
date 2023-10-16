#include "main.h"

/**
 * _isalpha -> check for lower case char
 * @c: the char to check
 * int _isalpha(int c) - take the output of this function and see
 * if its lowercase using ASCII
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
