#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int multi = 1;

	/* Check if there are exactly two arguments */
	if (argc == 3)
	{
	/* Calculate the product of the two arguments */
	while (i < argc)
	{
	multi *= atoi(argv[i]);
	i++;
	}
	printf("%d\n", multi);
	}
	else
	{
	/* Print an error message and return 1 for error */
	printf("Error\n");
	return (1);
	}

	return (0);
}
