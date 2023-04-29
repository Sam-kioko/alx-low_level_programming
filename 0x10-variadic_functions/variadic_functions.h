#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print - Struct print
 *
 * @type: The type of argument
 * @func: The function to print the argument
 */
typedef struct print
{
	char type;
	void (*func)(va_list);
} print_t;

int _putchar(char c);

void print_char(va_list valist);

void print_int(va_list valist);

void print_float(va_list valist);

void print_string(va_list valist);

void print_all(const char * const format, ...);

#endif
