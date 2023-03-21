#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character to be checked
 *
 * Return: one for lowercase character or zero for otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
