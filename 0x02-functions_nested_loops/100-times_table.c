#include "main.h"

/**
 * print_times_table - Prints the n table, starting with zero
 * @n: The number of table to print
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int numb, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');
		}

		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');
		}

		prod = numb * mult;
		if (prod <= 99)
		{
			_putchar(' ');
		}
		if (prod <= 9)
		{
			_putchar(' ');
		}
		if (prod >= 100)
		{
			_putchar((prod / 100) + '0');
			_putchar((prod % 100) + '0');
		}
		else if (prod <= 99 && prod >= 10)
		{
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
	}
}
