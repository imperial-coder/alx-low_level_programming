#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	itn i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
