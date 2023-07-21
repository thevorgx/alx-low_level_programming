#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: nothing, nada
 */

void more_numbers(void)
{
	int v;

	int j;

	for (v = 1 ; v <= 10 ; v++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar(j % 10 + '0');

		}
		_putchar('\n');

	}
}
