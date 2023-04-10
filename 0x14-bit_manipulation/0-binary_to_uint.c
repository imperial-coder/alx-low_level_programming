#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary to convert
 *
 * Return: value of unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0, sum = 0, number, value;

	if (!b)
		return (0);
	while (b[count])
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		count++;
	}
	number = atoi(b);
	count = 0;

	while (number > 0)
	{
		value = number % 10;
		if (value == 0)
		{
			number /= 10;
			count++;
			continue;
		}
		sum += (value * binary_to_decimal(count++));
		number /= 10;
	}
	return (sum);
}

/**
 * binary_to_decimal - returns the
 * @i: number of times to multiply
 *
 * Return: the value of the multiplication
 */
int binary_to_decimal(int i)
{
	if (i == 0)
		return (1);
	if (i == 1)
		return (2);
	return (2 * binary_to_decimal(i - 1));
}
