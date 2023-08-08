#include "Main.h"
#include <stdlib.h>
/**
 ** create_arr - Creates an array of characters and initializes it with a given character.
 ** @size: The size of the array to be created.
 ** @c: The character to initialize the array elements with.
 **
 ** Return: On success, a pointer to the newly created array. On failure, NULL.
 **/
char *create_arr(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return NULL;

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	return NULL;

	for (i = 0; i < size; i++)
	arr[i] = c;
	return (arr);
}
