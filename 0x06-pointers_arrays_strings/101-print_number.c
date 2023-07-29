#include "main.h"

/**
 * print_number - prints an integer.
 * @n: int param to print
 */

void print_number(int n)
{
    unsigned int n1;

    if (n == -2147483648)
    {
        _putchar('-');
        _putchar('2');
        print_number(147483648);
        return;
    }

    n1 = (n < 0) ? -n : n;

    if (n < 0)
        _putchar('-');

    if (n1 / 10 != 0)
    {
        print_number(n1 / 10);
    }
    _putchar(n1 % 10 + '0');
}
