#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: index of bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= i;

	return (1);
}
