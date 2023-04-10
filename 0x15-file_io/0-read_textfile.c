#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: pointer to file name to print from
 * @letters: text to store
 *
 * Return:  number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rfd, count;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	rfd = read(fd, buf, letters);
	close(fd);
	if (rfd == -1)
	{
		free(buf);
		return (0);
	}

	count = write(1, buf,  rfd);
	free(buf);
	if (rfd != count || count == -1)
		return (0);

	return (count);
}
