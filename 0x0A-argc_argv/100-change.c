#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts the command-line arguments
 * @argv: the arrays to the command-line argument
 *
 * Return: Always 0 (success);
 */

int main(int argc, char *argv[])
{
	int cents, notcents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents  = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	notcents += cents / 25;
	cents %= 25;
	notcents += cents / 10;
	cents %= 10;
	notcents += cents / 5;
	cents %= 5;
	notcents += cents  / 2;
	cents %= 2;
	cents += cents / 1;

	printf("%d\n", notcents);
	return (0);
}
