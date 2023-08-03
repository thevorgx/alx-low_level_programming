#include "main.h"

/**
 * is_palindrome - paladimor func
 * @s: Pointer to the input string
 *
 * Return: char pointer
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 1);
}
