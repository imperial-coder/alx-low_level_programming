#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: size of memory
 *
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
