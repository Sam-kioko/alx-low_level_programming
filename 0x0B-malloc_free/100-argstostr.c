#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the argument of your program
 * @ac: integer rep number of arguments passed to the program
 * @av: double pointer to an array of strings
 * contating the arguments
 *
 * Return: pointer to a new string or NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int i, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}

	return (ptr);
}
