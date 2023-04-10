#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: bit to flip
 * @m: bit to get
 *
 * Return: number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, highest = n, lowest = m;

	if (highest < lowest)
	{
		highest = m;
		lowest = n;
	}

	while (highest)
	{
		if ((highest & 1) != (lowest & 1))
			count++;
		highest >>= 1;
		lowest >>= 1;
	}

	return (count);
}
