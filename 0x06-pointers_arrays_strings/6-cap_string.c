#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: inputed string
 *
 * Return: pointer to the edited string
 */

char *cap_string(char *s)
{
	int i, k;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i]; i++)
	{
		for (k = 0; spe[k]; k++)
		{
			if (i == 0 && s[i] > 96 && s[i] < 123)
				s[i] -= 32;
			if (s[i] == spe[k])
			{
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] -= 32;
					break;
				}
			}
		}
	}

	return (s);
}
