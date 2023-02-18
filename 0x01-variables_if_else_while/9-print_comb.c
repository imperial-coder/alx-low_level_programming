#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
		if (i != 58)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
