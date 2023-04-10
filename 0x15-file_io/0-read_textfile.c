#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: pointer to file name to print from
 * @letters: text to store
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t rfd, count;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	rfd = read(fd, buf, letters);
	if (!rfd)
	{
		free(buf);
		return (0);
	}
	buf[rfd] = '\0';

	close(fd);

	count = write(1, buf, rfd);
	if (!count)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (count);
}
