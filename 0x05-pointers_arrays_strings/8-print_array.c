#include <stdio.h>

/**
 * print_array -> Prints n index of an array's integers
 *
 * @a: Param Pointer
 * @n: Parame index Array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
