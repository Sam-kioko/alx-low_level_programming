#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: string that is printed between numbers
 * @n: numbers of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int k;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(args, int);
		printf("%d", k);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
