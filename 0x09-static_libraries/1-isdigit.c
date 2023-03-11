#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: number to check
 *
 * Return: 1 if found, 0 otherwise
 */

int _isdigit(int c)
{
	int i = 48;

	while (i < 58)
	{
		if (i++ == c)
			return (1);
	}
	return (0);
}
