#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			j = i;
			while (j)
			{
				_putchar(' ');
				j--;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

