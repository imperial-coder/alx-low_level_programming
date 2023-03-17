#include "main.h"
#include <stdlib.h>

/**
 * _memset -  fills the first n bytes of the memory
 * area pointed to by s
 * @s: stirng literal
 * @n: n number of byte
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = 0;

	return (s);
}

/**
 * _calloc - mallocates memory for an array, using malloc
 * @nmemb: number of blocks
 * @size: size of each block
 *
 * Return: void pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *newptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newptr = malloc(nmemb * size);
	if (!newptr)
		return (NULL);

	_memset(newptr, (nmemmb * size));
	return (newptr);
}
