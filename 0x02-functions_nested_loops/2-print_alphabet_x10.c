#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{

	char alpha;

	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)

			_putchar(alpha);
		_putchar ('\n');
	}
}
