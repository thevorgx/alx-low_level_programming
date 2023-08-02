#include "main.h"

/**
 * _pow_recursion - x raised to y
 *
 * @x: number param
 * @y: power param
 * Return: -1 , 0 , returns x^y
 */

int _pow_recursion(int x, int y)
{

        if (y < 0)
                return (-1);
        if (y == 0)
                return (1);
        return (x * _pow_recursion(x, y - 1));
}
