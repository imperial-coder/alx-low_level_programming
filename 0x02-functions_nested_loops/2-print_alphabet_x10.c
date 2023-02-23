#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int count = 0;

	while (count < 10)
	{
		i = 97;
		while (i < 123)
			_putchar(i++);
		_putchar('\n');
		count++;
	}
}
