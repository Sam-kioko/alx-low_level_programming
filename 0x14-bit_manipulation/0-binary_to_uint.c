#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a charachter
 *
 * Return: converted number, or 0 if there is one or
 * more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0, p = 1;
	size_t len = strlen(b);
	int i;
	char m;

	if (b == NULL)
	{
		return (0);
	}
	for (i = len - 1; i >= 0; i--)
	{
		m = b[i];
		if (m == '0')
		{
			k += 0 * p;
		}
		else if (m == '1')
		{
			k += 1 * p;
		}
		else
		{
			return (0);
		}
		p *= 2;
	}
	
	return (k);
}
