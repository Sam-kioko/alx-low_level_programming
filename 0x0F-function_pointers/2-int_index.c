#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array to be searched
 * @size: size of the array
 * @cmp: pointer to a function that will be compared
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0.If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size  > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
