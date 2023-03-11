#include "main.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: converted value
 */

int _atoi(char *s)
{
	int i, negate_count = 0, number = 0;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == '-')
			negate_count++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (number * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if (negate_count % 2 == 0)
		number = number;
	else
		number = -number;
	return (number);
}
