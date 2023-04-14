#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to be concatenated from 2nd string
 *
 * Return: pointer pointing to anewly allocated space in memory,
 * contating s1, n bytes of s2 and a null terminator
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n >= len2)
	{
		strcat(ptr, s2);
	}
	if (n < len2)
	{
		strncat(ptr, s2, n);
	}

	ptr[len1 + n] = '\0';

	return (ptr);
}
