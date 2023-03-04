#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string inputed
 *
 * Return: pointer to the encoded stirng
 */

char *leet(char *s)
{
	int i, j;
	char numbers[6] = {'4', '3', '0', '7', '1'};
	char letters[6] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j] || s[i] == letters - 32)
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
