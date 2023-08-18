#include "variadic_functions.h"

/**
 * print_all - Prints a list of arguments based on the given format string.
 * @format: A format string containing format specifiers for arguments.
 * @...: Additional arguments based on the format string.
 * Return: Nada
 **/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}

		if (format[i])
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}
