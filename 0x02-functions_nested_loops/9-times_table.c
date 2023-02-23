#include "mian.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int start = 0;
	int i, j;

	for (i = 0; i < 9; i++)
	{
		_putchar(start);
		for (j = 1; j < 9; j++)
		{
			_putchar(',');
			_putchar(' ')
			if ((i * j) < 10)
				_putchar(' ');
			_putchar((i * j));
		}
		_putchar('\n');
	}
}
