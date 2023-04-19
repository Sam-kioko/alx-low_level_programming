#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog struct
 * @name: pointer to a charachter
 * @age: float number
 * @owner: pointer to a charachter
 *
 * Return: pointer to new dog or NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *name1, *owner1;

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name1 = malloc(strlen(name + 1));

	if (name1 == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner1 = malloc(strlen(owner + 1));

	if (owner1 == NULL)
	{
		free(name1);
		free(new_dog);
		return (NULL);
	}

	strcpy(name1, name);
	strcpy(owner1, owner);

	new_dog->name = name1;
	new_dog->age = age;
	new_dog->owner = owner1;

	return (new_dog);
}
