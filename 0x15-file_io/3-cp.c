#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFF_SIZE 1024

/**
 * err_exit - prints an error message to POSIX stderr
 * @code: exit code
 * @msg: error message to print
 * @arg: additional argument (file name, file descriptor)
 *
 * Return: nothing (void)
 */
void err_exit(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}


/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, other number otherwise
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, written_bytes;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		err_exit(97, "Usage: cp file_from file_to\n", "");
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		err_exit(98, "Error: Can't read from file %s\n", argv[1]);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		err_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((read_bytes = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			close(file_from);
			close(file_to);
			err_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		close(file_from);
		close(file_to);
		err_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_from) == -1)
		err_exit(100, "Error: Can't close fd %d\n", "file_from");
	if (close(file_to) == -1)
		err_exit(100, "Error: Can't close fd %d\n", "file_to");
	return (0);
}
