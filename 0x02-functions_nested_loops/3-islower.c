#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i = 97;

	while (i < 123)
	{
		if (c == i++)
			return (1);
	}
	return (0);
}
