#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long int which is the bit to clear
 * @index: index of bit to clear
 *
 * Return:  1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= k;

	return (1);
}
