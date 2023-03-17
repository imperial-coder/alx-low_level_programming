#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *newptr;

	if (min > max)
		return (NULL);

	newptr = malloc(sizeof(int) * (max - min + 1));
	if (!newptr)
		return (NULL);

	for (i = 0; min <= max; i++)
		newptr[i] = min++;

	return (newptr);
}
