#include "main.h"

/**
	* vorprime -check for prime
	* @n: input number param
	* @v: to check if n can be divised.
	* Return: 1 if prime, 0 if not else recurse
	*/
int vorprime(int n, int v)
{
	if (v == 1)
	return (1);
	if (n % v == 0)
	return (0);
	return (vorprime(n, v - 1));
}

/**
 * is_prime_number - checks if input int is prime
 *
 * @n: num param
 * Return: return 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 3)
	return (0);
	return (vorprime(n, n - 1));
}
