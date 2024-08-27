#include "main.h"


/**
 * create_file - creates a file or truncate if exists
 * @filename: the name of the file;
 * @text_content: the text to write to the created/truncated file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, str_len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	if (*text_content == '\0')
	{
		close(fd);
		return (1);
	}
	str_len = 0;
	while (text_content[str_len] != '\0')
		str_len++;
	bytes_written = write(fd, text_content, str_len);
	if (bytes_written == -1 || bytes_written != (ssize_t) str_len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
