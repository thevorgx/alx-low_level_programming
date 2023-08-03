#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * vordet - detects if a string is a palindrome.
 * @s: string.
 * @i: difference.
 * @n: length of the string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int vordet(char *s, int i, int n)
{
	if (i >= n)
	return (1);
	if (*(s + i) != *(s + n))
	return (0);
	return (vordet(s, i + 1, n - 1));
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	if (len <= 1)
	return (1);
	return (vordet(s, 0, len - 1));
}

