#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime number
 * returns 0 if otherwise
 * @n: integer
 *
 * Return: return 1 if integer is prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}

	return (1);
}
