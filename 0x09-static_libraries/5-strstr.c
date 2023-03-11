#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to search
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0; haystack[j]; j++)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i + j] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack + j);
	}
	return (NULL);
}
