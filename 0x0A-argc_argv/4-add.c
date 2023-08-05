#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[]) {
    int summ = 0;

    if (argc == 1) {
        printf("0\n");
        return (0);
    }

    int i = 1;
    while (i < argc) {
        int j = 0;
        while (argv[i][j] != '\0') {
            if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-')) {
                printf("Error\n");
                return 1;
            }
            j++;
        }
        summ += atoi(argv[i]);
        i++;
    }

    printf("%d\n", summ);
    return (0);
}
