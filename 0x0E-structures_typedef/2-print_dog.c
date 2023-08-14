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

	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
