#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);
	putchar('\n');
	return (0);
}
