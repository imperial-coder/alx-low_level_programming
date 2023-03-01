#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, new_count, count = 0;
	char new_s;

	while (s[count])
		count++;

	new_count = count - 1;
	for (i = 0; i <= count / 2; i++)
	{
		new_s = s[i];
		s[i] = s[new_count];
		s[new_count--] = new_s;
	}
}
