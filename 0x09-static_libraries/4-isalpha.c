#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c)
{
	int a = 65;

	while (a < 91)
	{
		if (c == a || c == a + 32)
			return (1);
		a++;
	}
	return (0);
}
