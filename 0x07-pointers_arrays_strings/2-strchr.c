#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a charachter in a string
 * @s: string to search
 * @c: charachter to locate
 *
 * Return:pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == c)
		{
			return (&s[k]);
		}
	}

	return (NULL);
}
