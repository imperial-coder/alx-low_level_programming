#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: stirng literal given
 * @c: character to search for
 *
 * Return: pointer to s(whre c first occurred)
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (c == i)
			return (s - 1);
		if (i == 0)
			return (NULL);
		i++;
	}
}
