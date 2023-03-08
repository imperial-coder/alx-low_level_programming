#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to ca;culate its lenght
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s)
	{
		count = 1;
		return (count + _strlen_recursion(s + 1));
	}
	return (0);
}
