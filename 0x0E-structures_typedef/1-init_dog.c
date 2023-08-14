#include "dog.h"

/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
