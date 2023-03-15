#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer pointing to newly allocated memory containing
 * contents of s1 followed by s2 and a null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *newptr;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	newptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (newptr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < size1)
		{
			newptr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (size1 + size2))
		{
			newptr[i] = s2[j];
			i++;
			j++;
		}
	}
	newptr[i] = '\0';

	return (newptr);
}
