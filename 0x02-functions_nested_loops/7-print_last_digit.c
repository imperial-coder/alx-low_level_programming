#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: inputted number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}

