#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the
 * first character, followed by a new line
 * @str: character pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (*str)
	{
		if (count % 2 == 0)
			_putchar(*str);
		count++;
		str++;
	}
	_putchar('\n');
}
