#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int start = 0;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(start + '0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
