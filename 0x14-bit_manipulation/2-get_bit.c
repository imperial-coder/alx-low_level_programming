#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to convert to binary
 * @index: index to find
 *
 * Return: value of index searched
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int index_val;

	if (index > 63)
		return(-1);
	index_val = (n >> index) & 1;
	
	return(index_val);
}
