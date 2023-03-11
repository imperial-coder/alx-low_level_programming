#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers command line argument
 * @argc: count for argv
 * @argv: pointer to array of pointer
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			exit(1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
