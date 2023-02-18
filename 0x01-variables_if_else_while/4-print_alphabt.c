#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
