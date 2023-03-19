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
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is", a);


	if (a > 5)
	{
	    printf(" and is greater than 5\n", a);
	}
	else if (a == 0)
	{
	    printf(" and is 0\n", a);
	}
	else
	{
	    printf(" and is less than 6 and not 0\n", a);
	}

	return (0);
}
