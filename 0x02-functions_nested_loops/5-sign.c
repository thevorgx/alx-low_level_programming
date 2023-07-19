#include "main.h"

/**
 * @n: the char to check
 * int print_sign(int n) - take the output of this function and see
 * prints the sign of a number
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
