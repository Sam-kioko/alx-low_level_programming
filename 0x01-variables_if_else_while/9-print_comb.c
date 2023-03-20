#include <stdio.h>

/**
 * main - Prints all possible combination of single digit numbers
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i + ',');
	}
	return (0);
}
