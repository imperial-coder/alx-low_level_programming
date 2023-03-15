#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2D array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array of integer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **newptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	newptr = malloc(sizeof(int *) * height);
	if (!newptr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newptr[i] = malloc(sizeof(int) * width);
		if (newptr[i] == NULL)
		{
			free(newptr);
			for (j = 0; j <= i; j++)
				free(newptr[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			newptr[i][j] = 0;
	}

	return (newptr);
}
