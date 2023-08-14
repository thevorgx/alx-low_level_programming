#include "dog.h"
#include <string.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->owner = strdup (owner);
	d->age = age;
}
