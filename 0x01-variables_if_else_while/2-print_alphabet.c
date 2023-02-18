#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 97;

	while (i < 123)
		putchar(i++);
	putchar('\n');
	return (0);
}
