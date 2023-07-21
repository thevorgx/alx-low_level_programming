#include "main.h"

/**
 * print_line - straight line draw
 *
 * @n: int para
 */

void print_line(int n)
{
	int v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 1; v <= n; v++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
