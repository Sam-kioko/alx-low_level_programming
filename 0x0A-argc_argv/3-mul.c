#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts the command-line arguments
 * @argv: the array to the command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int k, l, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	l = atoi(argv[2]);
	res = k * l;

	printf("%d\n", res);

	return (0);
}
