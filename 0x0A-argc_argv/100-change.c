#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: count for argv
 * @argv: pointer to arrya of pointer
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int j, number, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("0\n");
		exit(1);
	}
	for (j = 0; j < 5; j++)
	{
		while (number >= coins[j])
		{
			result++;
			number -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
