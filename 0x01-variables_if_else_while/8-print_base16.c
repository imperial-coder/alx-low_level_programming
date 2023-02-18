#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, n;

	i = 48;
	n = 97;

	while (i < 58)
		putchar(i++);
	while (n < 103)
		putchar(n++);
	putchar('\n');
	return (0);
}
