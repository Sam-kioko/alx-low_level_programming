#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c & lt ; = 'z' ; c++)
		putchar (c);
	for (c = 'A '; c & lt ; = 'Z' ; c++)
		putchar (c);
	putchar('\n');
	return (0);
}
