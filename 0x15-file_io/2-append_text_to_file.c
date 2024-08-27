#include "main.h"


/**
 * append_text_to_file - appends text to a file
 * @filename: the file to append to
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, str_len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len] != '\0'; str_len++)
			;
		bytes_written = write(fd, text_content, str_len);
		if (bytes_written == -1 || bytes_written != (ssize_t) str_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
