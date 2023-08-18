#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * ...: Variable number of strings to be printed.
 * Return: Nada.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
