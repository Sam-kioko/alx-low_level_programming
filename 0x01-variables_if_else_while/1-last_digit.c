#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints output of positive, negative, or zero number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is", n, lastDigit);


	if (lastDigit > 5)
	{
	    printf(" and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
	    printf(" and is 0\n", n, lastDigit);
	}
	else
	{
	    printf(" and is less than 6 and not 0\n", n, lastDigit);
	}

	return (0);
}
