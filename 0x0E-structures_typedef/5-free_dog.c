#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memoery allocated for struct dog
 * @d: pointer to a struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);

	free(d);
}
