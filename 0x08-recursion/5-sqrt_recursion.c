#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find its square root
 *
 * Return: natural square root or -1 if otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - recurses to find the natural sqrt
 * @n: number to find its sqrt
 * @i: number of iteartions
 *
 * Return: the resulting square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
