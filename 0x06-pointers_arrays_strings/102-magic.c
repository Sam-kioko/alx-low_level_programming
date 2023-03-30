#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a[5] = {98, 402, 1024, 1024, 4096};
	int *p;

	p = &a[2];
	printf("a[2] = %d\n", *(p - 2));

	return (0);
}
