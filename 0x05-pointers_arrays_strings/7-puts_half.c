#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: character pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 1; str[i] != '\0'; i++)
		continue;
	if (i % 2 == 0)
	{
		for (j = i / 2; j <= i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i / 2) + 1; j <= i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
