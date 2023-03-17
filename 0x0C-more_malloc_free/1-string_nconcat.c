#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: secong string
 * @n: n byte of s2
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newptr;
	unsigned int i, size1 = 0, size2 = 0;

	if (!s1)
		size1 = 0;
	else
	{
		while (s1[size1])
			size1++;
	}
	if (!s2)
		size2 = 0;
	else
	{
		while (s2[size2])
			size2++;
	}
	if (n >= size2)
		n = size2;

	newptr = malloc(sizeof(char) * (size1 + n + 1));
	if (!newptr)
		return (NULL);

	for (i = 0; i < size1; i++)
		newptr[i] = s1[i];
	for (i = 0; i < n; i++)
		newptr[size1 + i] = s2[i];
	newptr[size1 + i] = '\0';

	return (newptr);
}
