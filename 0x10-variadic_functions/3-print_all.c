#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints everything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, k = 0;
	char *s = "";
	print_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);

	while (format && format[i])
	{
		while (funcs[k].type)
		{
			if (format[i] == funcs[k].type)
			{
				printf("%s", s);
				funcs[k].func(valist);
				s = ", ";
				break;
			}
			k++;
		}
		i++;
	}

	va_end(valist);

	printf("\n");
}

/**
 * print_char - Prints a char
 * @valist: The va_list containing the char to print
 *
 * Return: void
 */

void print_char(va_list valist)
{
	char c = va_arg(valist, int);

	printf("%c", c);
}

/**
 * print_int - Prints an int
 * @valist: The va_list containing the int to print
 *
 * Return: void
 */
void print_int(va_list valist)
{
	int i = va_arg(valist, int);

	printf("%d", i);
}

/**
 * print_float - Prints a float
 * @valist: The va_list containing the float to print
 *
 * Return: void
 */

void print_float(va_list valist)
{
	float f = va_arg(valist, double);

	printf("%f", f);
}

/**
 * print_string - Prints a string
 * @valist: The va_list containing the string to print
 *
 * Return: void
 */

void print_string(va_list valist)
{
	char *s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}
