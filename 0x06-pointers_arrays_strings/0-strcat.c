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
	int des = 0, i = 0;

	while (dest[des] != '\0')
	{
		des++;
	}
	while (src[i] != '\0')
	{
		dest[des] = src[i];
		des++;
		i++;
	}
	dest[des] = '\0';
	return (dest);
}
