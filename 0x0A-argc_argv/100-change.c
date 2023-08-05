#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int change = 0;
	int num;

	/* Check if there is one command-line argument */
	if (argc == 2)
	{
	num = atoi(argv[1]);
	if (num > 0)
	{
	/* Calculate change */
	while (num >= 25)
	{
	num -= 25;
	change++;
	}
	while (num >= 10)
	{
	num -= 10;
	change++;
	}
	while (num >= 5)
	{
	num -= 5;
	change++;
	}
	while (num >= 2)
	{
	num -= 2;
	change++;
	}
	while (num >= 1)
	{
	num -= 1;
	change++;
	}
	}

	printf("%d\n", change);
	return (0);
	}


	printf("Error\n");
	return (1);
}

