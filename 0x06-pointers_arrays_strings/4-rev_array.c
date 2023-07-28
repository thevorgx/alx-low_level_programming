#include "main.h"

/**
 * reverse_array - reversing array element
 * @a: array para
 * @n: n elems for the array para
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int rvs;

	while (i < n)
	{
	rvs = a[i];
	a[i] = a[n - 1];
	a[n - 1] = rvs;
	i++;
	n--;
	}
}
