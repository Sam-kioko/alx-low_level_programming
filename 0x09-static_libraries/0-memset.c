#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to memory to be filled
 * @b: constant byte
 * @n: number of bytes to fill the memory
 *
 * Return: pointer to the memory to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
