#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new lin
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 97;

	while (i < 123)
		putchar(i++);
	i -= 58;
	while(i < 91)
		putchar(i++);
	putchar('\n');
	return (0);
}
