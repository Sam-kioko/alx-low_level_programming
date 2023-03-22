#include "main.h"

/**
 * sum_multiples - Computes and returns the sum of multiples of three and five
 *
 * Return: The sum of all multiples of three and five
 */

int sum_multiples(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{

		if (sum_multiples(i))
		{
			sum += i;
		}
	}

	return (sum);
}
