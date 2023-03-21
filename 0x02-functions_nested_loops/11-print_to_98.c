#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to ninety eight
 * @n: Starting number
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = 98; i <= 98; i++)
		{
			printf("%d\n", i);
			if (i != 98)
			{
				printf(", \n");
			}
		}
	}
	else
	{
		for (i = 98; i >= 98; i--)
		{
			printf("%d\n", i);
			if (i != 98)
			{
				printf(", \n");
			}
		}
	}
}
