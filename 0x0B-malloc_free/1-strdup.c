#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + len))
	{
		len++;
	}

	copy = malloc(sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(copy + i) = *(str + i);
	}

	return (copy);
}
