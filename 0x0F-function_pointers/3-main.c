#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0, result = 0;
	char s;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	if (argv[2][1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	s = argv[2][0];

	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
	printf("Error\n");
	exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	result = (get_op_func(argv[2]))(x, y);
	printf("%d\n", result);
	return (0);
}
