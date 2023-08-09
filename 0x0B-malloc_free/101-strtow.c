#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: An array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int word_count = 0;
	char *token;
	char *copy;
	int i;
	int j;
	
    if (str == NULL || *str == '\0')
        return (NULL);

    copy = strdup(str);
    if (copy == NULL)
        return (NULL);

    token = strtok(copy, " ");
    while (token != NULL)
    {
        word_count++;
        token = strtok(NULL, " ");
    }

    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (result == NULL)
    {
        free(copy);
        return (NULL);
    }

    token = strtok(str, " ");
    for (i = 0; i < word_count; i++)
    {
        result[i] = strdup(token);
        if (result[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(result[j]);
            free(result);
            free(copy);
            return (NULL);
        }
        token = strtok(NULL, " ");
    }

    result[word_count] = NULL;
    free(copy);

    return (result);
}
