#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int p, r;

	for (p = 0; p <= 98; p++)
	{

	for (r = p + 1; r <= 99; r++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((r / 10) + '0');
	putchar((r % 10) + '0');
	if (p == 98 && r == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
