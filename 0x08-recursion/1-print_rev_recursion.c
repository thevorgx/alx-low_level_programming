#include "main.h"
/**
 * _print_rev_recursion - prints in rev
 *
 *@s: string param
 * Return: rien, nothing, walo, nada
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
	_print_rev_recursion(s);
	_putchar(*s);
	}
}
