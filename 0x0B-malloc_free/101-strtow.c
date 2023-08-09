#include <stdlib.h>
#include "main.h"

/**
 * countWords - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
char **strtow(char *str);
{
    int j = 0;
    int i = 0;
    int v = 0;

    while (str[j] != '\0') {
        if (str[j] == ' ') {
            v = 0;
        } else if (v == 0) {
            v = 1;
            i++;
        }
        j++;
    }

    return (i);
}
