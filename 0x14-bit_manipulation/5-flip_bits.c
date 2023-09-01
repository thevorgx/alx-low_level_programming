#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from oner number to another.
 *
 * @n: first number.
 * @m: seconde number.
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count = 0;

	i = n ^ m;
	while (i > 0)
	{
		count++;
		i &= (i - 1);
	}
	return (count);
}
