#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts command-line arguments
 * @argv: the array to the command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
