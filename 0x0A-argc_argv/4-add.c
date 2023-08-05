#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: (0) if successful, (1) if an error occurred.
 */
int main(int argc, char *argv[])
{
	int j = 1;
	int summ = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	while (j <= argc - 1)
	{
		int i = 0;

	while (argv[j][i] != '\0')
	{
	if (!isdigit(argv[j][i]))
	{
	printf("Error\n");
	return (1);
	}
	i++;
	}
	summ += atoi(argv[j]);
	j++;
	}

	printf("%d\n", summ);
	return (0);
}
