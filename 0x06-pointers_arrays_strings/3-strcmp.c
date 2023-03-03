#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first sting
 * @s2: second string
 * 
 * Return: an integer less than, equal to,  or  greater than zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
