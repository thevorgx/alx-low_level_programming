#include "main.h"

/**
 * print_times_table -  prints n tables, initial 0
 * @n: input function
 */

void print_times_table(int n)
{
	 int n1, n2;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0; n1 <= n; n++)
		{
			_putchar('0');
			for (n2 = 1; n2 <= n; n2++)
			{
				_putchar(',');
				if (n1 * n2 <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(n1 * n2 + '0');
				}
				else
				{
					_putchar(' ');
					if (n1 * n2 <= 99)
					{
						_putchar(' ');
						_putchar((n1 * n2) / 10 + '0');
					}
					else
					{
						_putchar((n1 * n2) / 100 + '0');
						_putchar(((n1 * n2) / 10) % 10  + '0');

					}
					_putchar((n1 * n2) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
