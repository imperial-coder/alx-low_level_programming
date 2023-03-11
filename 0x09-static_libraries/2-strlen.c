#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}

