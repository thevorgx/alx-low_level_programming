#include "main.h"

/**
 * print_number - print int
 * @n: print_number int param
 */

void print_number(int n)
{
	unsigned int v;

	if (n < 0)
	{
		v = -n;
		_putchar('-');
	}
	else
		v = n;
	if (v / 10)
	{
		print_number(v / 10);
	}

	_putchar((v % 10) + '0');
}
