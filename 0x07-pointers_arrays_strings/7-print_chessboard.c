#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array of pointers
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		while (a[i][j])
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
	}
}
