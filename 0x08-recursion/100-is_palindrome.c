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
	while (*(end + 1))
	{
		end++;
	}
	while (end > begin)
	{
		if (*begin != *end)
		{
			return (0);
		}
		begin++;
		end--;
	}

	return (1);
}
