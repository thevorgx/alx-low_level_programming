#include "main.h"
/**
 * _sqrt_recursion - returns square of a number
 *
 * @n: number param
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
        int v = 2;

        if (n < 0)
                return (-1);
        else if (n == 0 || n == 1)
                return (n);
        return (isqrt(n, v));
}

/**
  * isqrt - calc square of n
  *
  * @n: number param to check
  * @i: square
  * Return: 1 if square, -1 if not else recur
  */
int isqrt(int n, int i)
{
        if (i * i > n)
                return (-1);
