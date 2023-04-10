#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary to convert
 *
 * Return: value of unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int sum = 0;

	if (!b)
		return (0);
	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		sum = 2 * sum + (b[count] - '0');
	}

	return (sum);
}
