#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * followed by a new line
 * @n: start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			if (n == 98)
				printf("%d\n", n++);
			else
				printf("%d, ", n++);
		}
	}
	else
	{
		while (n > 97)
		{
			if (n == 98)
				printf("%d\n", n--);
			else
				pritnf("%d, ", n--);
		}
	}
}
