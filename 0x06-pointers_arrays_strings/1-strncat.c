#include "main.h"

/**
 * _strncat - concatenates two strings suing 8 bytes from src
 * @dest: input value
 * @src: input value
 * @n:input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int des = 0, i = 0;

	while (dest[des] != '\0')
	{
		des++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[des] = src[i];
		des++;
		i++;
	}
	dest[des] = '\0';
	return (dest);
}
