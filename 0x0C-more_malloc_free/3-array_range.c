#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of range of integers
 * @max: maximum value of range of integers
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int size, i, value;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	value = min;

	for (i = 0; i < size; i++)
	{
		array[i] = value;
		value++;
	}

	return (array);
}
