#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of 2 diagonals of square matrix of integers
 * @a: pointer to an integer
 * @size: the size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += *(a + k * size + k);
		sum2 += *(a + k * size + (size - 1 - k));
	}

	printf("%d %d\n", sum1, sum2);
}
