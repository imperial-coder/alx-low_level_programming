#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of buffer
 * @c: character to initialise
 *
 * Return: pointer to array of character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *newptr;

	if (size <= 0)
		return (NULL);

	newptr = malloc(sizeof(char) * size);
	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newptr[i] = c;
	return (newptr);
}
