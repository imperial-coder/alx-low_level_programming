#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to be searched
 * @accept: string to search
 *
 * Return: number of bytes in the inital segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, flag;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (count);
	}
	return (0);
}
