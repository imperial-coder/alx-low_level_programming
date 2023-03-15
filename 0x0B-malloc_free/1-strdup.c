#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given as parameter
 *
 * Return: pointer to string literal
 */
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *newptr;

	if (!str)
		return (NULL);
	while (str[size])
		size++;

	newptr = malloc(sizeof(char) * (size + 1));
	if (!newptr)
		return (NULL);

	for (i = 0; str[i]; i++)
		newptr[i] = str[i];
	newptr[i] = '\0';

	return (newptr);
}
