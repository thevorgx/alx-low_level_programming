#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Structure representing information about a dog.
 * @name: Pointer to the dog's name.
 * @owner: Pointer to the owner's name.
 * @age: Age of the dog.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
