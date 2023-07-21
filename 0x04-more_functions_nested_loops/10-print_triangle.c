#include "main.h"

/**
 * print_triangle - draw a triangle
 * @size: triangle size
 *
 * Return: nothing, nada, void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int v;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < size; ++i)
	{
		for (j = size - i ; j > 1 ; --j)
			_putchar(' ');
		for (v = 0 ; v <= i ; ++v)
			_putchar('#');
		_putchar('\n');
	}
}
