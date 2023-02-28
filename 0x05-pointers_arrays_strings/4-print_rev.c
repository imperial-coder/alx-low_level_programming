#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	while (*s)
		s++;

	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
