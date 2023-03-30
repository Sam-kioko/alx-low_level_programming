#include "main.h"

/**
 * _strcat - concetenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int des = 0, i;

	while (dest[des] != '\0')
	{
		des++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[des + i] = src[i];
		dest[des + i] = '\0';
	}
	return (dest);
}
