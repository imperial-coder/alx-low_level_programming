#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: stirng destination
 * @src: string source
 * @n: n bytes
 *
 * Return: pointer to concatenated string
 */

char *_strncat (char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	while (dest[i])
		i++;
	while (src[count] && count < n)
	{
		dest[i] = src[count];
		count++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
