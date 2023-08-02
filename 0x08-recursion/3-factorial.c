#include "main.h"
/**
 * factorial - return the fact of a number
 *
 * @n: number.
 * Return: number or fact
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
