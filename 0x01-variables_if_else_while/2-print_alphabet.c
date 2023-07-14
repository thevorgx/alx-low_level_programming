// main C program to print the alphabet in lowercase

#include <stdio.h>

int main()
{
    // Get the character to be written
    char ch;

    // Write the characters from 'a' to 'z'
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);

    // Print a newline character
    putchar('\n');

    return 0;
}
