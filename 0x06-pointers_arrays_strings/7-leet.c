#include "main.h"

/**
 * *leet - encode
 *
 * @str: str param
 *
 * Return: str
 */

char *leet(char *str)
{
    int i = 0;
    int j = 0;
    char *p1 = "aAeEoOtTlL";
    char *p2 = "4433007711";

    while (str[i] != '\0')
    {
        j = 0;
        while (j < 10)
        {
            if (str[i] == p1[j])
            {
                str[i] = p2[j];
                break;
            }
            j++;
        }

        i++;
    }

    return (str); 
}

