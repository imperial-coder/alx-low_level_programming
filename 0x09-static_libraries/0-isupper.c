#include "main.h"

/**
 * _isupper -  checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	int i = 65;

	while (i < 91)
	{
		if (c == i++)
			return (1);
	}
	return (0);
}
