#include"main.h"
void print_rev(char *s)
{
	char *fin = s;

	while (*fin != '\0')
	{
		++fin;
	}
	while (fin != s)
	{
		_putchar(*s);
		--fin;
	}
	_putchar('\n');
}
