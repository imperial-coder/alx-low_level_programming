#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text
 * @text_content: content to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0, s, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;
		s = write(fd, text_content, count);
		if (s == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
