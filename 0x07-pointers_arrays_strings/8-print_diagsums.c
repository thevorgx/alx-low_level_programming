#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: The input square matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int j = 0;
	unsigned int s = 0;
	unsigned int summ = 0;

	while (j < size)
	{
		s += a[(size * j) + j];
		summ += a[(size * (j + 1)) - (j + 1)];
		j++;
	}

	printf("%d, %d\n", s, summ);
}
