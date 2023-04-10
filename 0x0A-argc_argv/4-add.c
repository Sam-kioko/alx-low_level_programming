#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: counts the command-line arguments
 * @argv: the aray to the command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i] == 0))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
