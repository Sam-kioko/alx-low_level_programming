#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		while ((format[i] != 'c' && format[i] != 'i' && format[i] != 'f'
		       && format[i] != 's') && format[i])
			i++;
		if (!format[i])
			break;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			break;
		}
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
