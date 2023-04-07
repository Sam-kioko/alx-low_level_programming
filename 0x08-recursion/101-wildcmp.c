#include "main.h"

/**
 * wildcmp -  compares two strings and returns 1 if the strings
 * can be considered indentical returns 0 if otherwise
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 *
 * Return: 1 if strings are considered identical, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
