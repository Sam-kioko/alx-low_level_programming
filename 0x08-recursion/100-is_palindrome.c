#include "main.h"

/**
 * is_palindrome - returns 1 if a string is palindrome, o if not
 * @s: pointer to a string
 *
 * Return: return 1 is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	char *begin = s, *end = s;

	if (*s == '\0')
	{
		return (0);
	}
	if (end == begin)
	{
		return (1);
	}
	if (*begin != *end)
	{
		return (0);
	}

	return (1);
}
