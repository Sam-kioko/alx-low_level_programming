#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts the command-line arguments
 * @argv: the array of command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);

	return (0);
}
