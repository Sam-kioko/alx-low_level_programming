#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: represents number of rows in the array
 * @height: represents number of columns in the array
 *
 * Return: pointer to a 2 dimensional array of integers
 * and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **wh;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	wh = (int **) malloc(width * sizeof(int *));

	if (wh == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		wh[i] = (int *) malloc(height * sizeof(int));

		if (wh[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(wh[j]);
			}
			free(wh);
			return (NULL);
		}

		for (j = 0; j < height; j++)
		{
			wh[i][j] = 0;
		}
	}
	return (wh);
}
