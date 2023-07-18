#include "main.h"

/**
 * main - Entry point Print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char write[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(write[i]);
	}
	_putchar('\n');
	return (0);
}


