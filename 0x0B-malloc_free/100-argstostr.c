#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    for (int i = 0; i < ac; i++)
        total_length += strlen(av[i]) + 1;

    char *result = (char *)malloc(total_length + 1);
    if (result == NULL)
        return NULL;

    int index = 0;
    for (int i = 0; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
            result[index++] = av[i][j];
        
        result[index++] = '\n';
    }

    result[index] = '\0';
    return result;
}
