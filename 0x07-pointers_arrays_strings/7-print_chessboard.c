#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array of pointers
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; a[i][j]; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
