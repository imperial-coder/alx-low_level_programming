#include "main.h"

/**
 * error_code - checks for the corresponding error
 * @file_from: file from
 * @file_to: file to
 * @argv: arguments vector
 *
 * Return: void
 */
void error_code(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: count of argv
 * @argv: pointer to an array of pointer
 *
 * Return: respective error or succes code
 */
int main(int argc, char **argv)
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: ./cp <file_from> <file_to>\n");
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_code(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_code(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_code(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		return (100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		return (100);
	}
	return (0);
}
