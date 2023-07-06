#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: input to function
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int k = n, m;
	size_t i = 0, p = 0;
	char *str;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (k > 0)
	{
		k >>= 1;
		p++;
	}

	str = malloc(p + 1);

	if (str == NULL)
	{
		exit(EXIT_FAILURE);
	}

	str[p] = '\0';

	for (i = 0; i < p; i++)
	{
		m = (n >> (p - 1 - i)) & 1;
		str[i] = '0' + m;
	}
	for (i = 0; i < p; i++)
	{
		_putchar(str[i]);
	}

	free(str);
}
