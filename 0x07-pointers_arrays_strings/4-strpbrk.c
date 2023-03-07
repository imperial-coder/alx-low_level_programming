#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: set of bytes
 *
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
