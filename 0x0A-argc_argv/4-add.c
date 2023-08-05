#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: (0) if successful, (1) if an error occurred.
 */
int main(int argc, char *argv[]) {
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}
