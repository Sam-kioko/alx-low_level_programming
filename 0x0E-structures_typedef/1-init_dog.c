#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - inializes a variable of struct dog
 * @d: pointer to a variable struct dog
 * @name: pointer to a charachter
 * @age: float number
 * @owner: pointer to a charachter
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
