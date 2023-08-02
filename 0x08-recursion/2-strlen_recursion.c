#include "main.h"
/**
 * _strlen_recursion - printing string
 *
 * @s: string param
 * Return: string length
 */
int _strlen_recursion(char *s)
{
        if (*s == NULL)
                return (0);
        return (0 + _strlen_recursion(s + 1));
}
