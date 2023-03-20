#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints output of positive, negative or zero number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int n, d;

	srand(time(0));
    	n = rand() - RAND_MAX / 2;

    	d = n % 10;

  	if (d > 5)
    	{
        	printf("Last digit of n is %d and is greater than 5\n", d);
    	}
    	else if (d == 0)
    	{
        	printf("Last digit of n is %d and is 0\n", d);
    	}
    	else
    	{
        	printf("Last digit of n is %d and is less than 6 and not 0\n", d);
    	}

    	return (0);
}
