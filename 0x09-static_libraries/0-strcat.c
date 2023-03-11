#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 *
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (dest[i])
		i++;
	while (src[count])
	{
		dest[i] = src[count];
		i++;
		count++;
	}

	dest[i] = '\0';
	return (dest);
}
