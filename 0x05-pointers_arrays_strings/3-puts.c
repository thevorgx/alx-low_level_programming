#include"main.h"

/**
 * _puts - check the code
 *@str: parameter to print with
 * Return: no return for a void function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
