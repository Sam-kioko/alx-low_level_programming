#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints last digit of a number stored in variable n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	d = n % 10;

	printf("Last digit of %i is ", d);
	if (d > 5)
	{
		printf("%i and is greater than 5\n", d);
	}
	else if (d == 0)
	{
		printf("%i and is 0\n", d);
	}
	else
	{
		printf("%i and is less than 6 and not 0\n", d);
	}
	return (0);
}
