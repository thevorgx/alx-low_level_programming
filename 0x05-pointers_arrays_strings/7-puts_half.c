#include "main.h"

/**
 * puts_half -> Prints last half of a string
 *
 * @str: parame
 */

void puts_half(char *str)
{
	int len, v;

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}
	if (len % 2 == 0)
	{
		v = len / 2;
	}
	else
	{
		v = (len - 1) / 2;
		v++;
	}
	while (str[v] != '\0')
	{
		_putchar(str[v]);
		v++;
	}
	_putchar('\n');
}
