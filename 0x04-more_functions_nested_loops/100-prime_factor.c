#include <stdio.h>

/**
 * main - the largest prime factor
 *
 * Return: nothing, nada, 0
 */

int main(void)
{
	long int v = 612852475143;

	long int o = 2;

	long int fac;

	while (v != 1)
	{
		if (v % o == 0)
		{
			v /= o;
			fac = o;
		}
		o++;
	}
	printf("%ld\n", fac);
return (0);
}
