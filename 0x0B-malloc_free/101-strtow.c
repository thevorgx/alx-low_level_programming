#include <stdlib.h>
#include <string.h>
#include "main.h"

char **strtow(char *str)
{
    int word_count = 0;
    char *token;
    char *copy;
    int i;
    char **result;

    if (str == NULL || *str == '\0')
        return NULL;

    // Duplicate the input string to work with a copy
    copy = strdup(str);
    if (copy == NULL)
        return NULL;

    // Count the number of words
    token = strtok(copy, " ");
    while (token != NULL)
    {
        word_count++;
        token = strtok(NULL, " ");
    }

    // Allocate memory for the array of strings
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (result == NULL)
    {
        free(copy);
        return NULL;
    }

    // Reset the copy and tokenize the original string
    strcpy(copy, str);
    token = strtok(copy, " ");
    for (i = 0; i < word_count; i++)
    {
        result[i] = strdup(token);
        if (result[i] == NULL)
        {
            for (int j = 0; j < i; j++)
                free(result[j]);
            free(result);
            free(copy);
            return NULL;
        }
        token = strtok(NULL, " ");
    }

    result[word_count] = NULL;
    free(copy);

    return result;
}

