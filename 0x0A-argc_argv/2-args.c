#include <stdio.h>

/**
 * main - prints all commmand line arguments it receives
 * @argc: count of argv
 * @argv: pointer ot pointer of array
 *
 * Return: 0 0n succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
