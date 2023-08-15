#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates and initializes a new dog_t structure.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Return: Pointer to the newly created dog_t structure, or NULL if failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;
	int len_name = 0;
	int len_owner = 0;

	while (name[len_name] != '\0')
		len_name++;

	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}

