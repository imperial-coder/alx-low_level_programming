#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count of argv
 * @argv: pointer to pointer of array
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
