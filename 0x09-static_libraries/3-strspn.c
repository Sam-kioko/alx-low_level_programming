#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string to search
 * @accept: the bytes to include in prefix
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k] == accept[l])
			{
				break;
			}
		}
		if (accept[l] == '\0')
		{
			return (k);
		}
	}

	return (k);
}
