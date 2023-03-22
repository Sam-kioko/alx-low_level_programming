#include "main.h"

/**
 * print_times_table - Prints the n table, starting with zero
 * @n: The number of table to print
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j = 0)
			{
				_putchar('0');
			}
			else if (result < 10);
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(return + '0');
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar((result % 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
