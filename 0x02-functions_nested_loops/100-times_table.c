#include "main.h"

/**
 * print_times_table - Prints the n time table, starting with zero
 * @n: The number of rows and columns in the table
 *
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 0; j <= n; j++)
		{
		prod = i * j;
		if (j > 0)
		{
			_putchar(' ');
			if (prod < 10)
			{
				_putchar(' ');
			}
		}
		if (prod <= 100)
		{
			_putchar(' ');
		}
		if (prod >= 100)
		{
			_putchar((prod / 100) + '0');
		}
		if (prod >= 10)
		{
			_putchar((prod / 10) % 10 + '0');
			_putchar((prod % 10) + '0');
		}
		if (j < n)
		{
			_putchar(',');
		}
		}
		_putchar('\n');
	}
}
