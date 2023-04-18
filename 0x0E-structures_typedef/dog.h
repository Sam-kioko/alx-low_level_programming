#ifndef DOG_H
# define DOG_H

/**
 * struct dog - contains 3 members
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
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
