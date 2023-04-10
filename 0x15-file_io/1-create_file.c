#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: content to be in tthe new file created
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0, s, fd;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[count] != '\0')
		count++;

	s = write(fd, text_content, count);
	if (s == -1)
		return (-1);

	close(fd);
	return (1);
}
