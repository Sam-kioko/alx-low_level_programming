#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number performing bitwise operations
 * @index: Index to be checked by the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & k) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
