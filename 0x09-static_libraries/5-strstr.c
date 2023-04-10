#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int k, l;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (l = 0; needle[l] != '\0'; l++)
		{
			if (haystack[k] != needle[l])
			{
				break;
			}
		}
		return (&haystack[k]);
	}

	return (NULL);
}
