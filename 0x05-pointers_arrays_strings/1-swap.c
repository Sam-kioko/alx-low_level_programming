#include "main.h"

/**
 * swap_int - Swaps the value of 2 integers
 * @a: pointer to the first integer
 *
 * @b: Pointer to the second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
