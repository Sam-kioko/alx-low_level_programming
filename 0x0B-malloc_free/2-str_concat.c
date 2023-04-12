#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer pointing to a newly allocated space in memory
 * which contains the contents of s1 and s2,
 * followed by a null terminator
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = '\0';

	if (str == NULL)
	{
		return (NULL);
	}

	return (str);
}
