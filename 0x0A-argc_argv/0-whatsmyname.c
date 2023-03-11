#include <stdio.h>

/**
 * main - prints its name after compilation
 * @argc: conut of argv
 * @argv: pointer to array of pointer to command line arguments
 *
 * Return: 0 on success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
