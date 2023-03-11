#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print to stdout
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
