#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 but skip 2 and 4
 */

void print_most_numbers(void)
{
	int v;

	for (v = '0' ; v <= '9' ; v++)
	{
		if (v != '2' && v != '4')
			_putchar(v);
	}

_putchar('\n');
}
