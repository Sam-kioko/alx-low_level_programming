#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e.
 * You can only use the putchar function.
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
