#include <stdio.h>

/**
 * main - prints the number of command line
 * arguments passed to it
 * @argc: count of argv
 * @argv: pointer to array of pointer to command line argument
 *
 * Return: 0- on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
