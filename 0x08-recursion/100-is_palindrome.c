#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Input string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return is_palindrome(s, 0, len - 1);
}

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: Pointer to string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

/**
 * vor_palindrome - Checks if a string is a palindrome.
 * @s: Input string.
 * @left: Left index of the substring.
 * @right: Right index of the substring.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int vor_palindrome(char *s, int left, int right)
{
    if (left >= right)
        return 1;

    if (*(s + left) != *(s + right))
        return 0;

    return vor_palindrome(s, left + 1, right - 1);
}

