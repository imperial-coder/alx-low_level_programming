#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dast: copied memory detsination
 * @src: memory source
 * @n: number of memory byte to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
