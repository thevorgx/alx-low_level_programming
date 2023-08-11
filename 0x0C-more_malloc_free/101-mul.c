#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success, 98 on incorrect arguments, 98 on non-digit input
 */
int main(int argc, char *argv[])
{
	long result;
	int len, i;
	char buffer [20];

    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (98);
    }

    for (i = 1; i < 3; i++)
    {
        char *num = argv[i];
        while (*num)
        {
            if (*num < '0' || *num > '9')
            {
                _putchar('E');
                _putchar('r');
                _putchar('r');
                _putchar('o');
                _putchar('r');
                _putchar('\n');
                return (98);
            }
            num++;
        }
    }

    result = atoll(argv[1]) * atoll(argv[2]);
    len = 0;

    if (result == 0)
        _putchar('0');
    else
    {
        while (result)
        {
            buffer[len++] = result % 10 + '0';
            result /= 10;
        }
        for (i = len - 1; i >= 0; i--)
            _putchar(buffer[i]);
    }

    _putchar('\n');

    return (0);
}
