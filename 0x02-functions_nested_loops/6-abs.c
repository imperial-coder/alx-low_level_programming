#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: inputted integer
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
