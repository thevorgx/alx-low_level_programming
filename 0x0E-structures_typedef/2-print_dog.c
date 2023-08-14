#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints information about a dog structure.
 * @d: Pointer to the dog structure to be printed.
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");

	if (d->age < 0)
	printf("Name: (nil)\n");
	else
	printf("Name: %f\n", d->age);

	if (d->owner != NULL)
	printf("Name: %s\n", d->owner);
	else
	printf("Name: (nil)\n");
}