#include <stdlib.h>

/**
 * struct dog - strcuture data type
 * @name: pointer to a charachter
 * @age: float number
 * @owner: pointer to a charachter
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * init_dog - initializes a variavle dog struct
 * @d: pointer to struct dog
 * @name: pointer to a charachter
 * @age: float number
 * @owner: pointer to a charachter
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
	{
		return;
	}

	d ->.name = name;
	d ->.age = age;
	d ->.owner = owner;
}
