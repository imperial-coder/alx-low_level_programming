#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array inputed
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int copy;

	while (i < n / 2)
	{
		copy = a[i];
		a[i++] = a[j];
		a[j--] = copy;
	}
}
