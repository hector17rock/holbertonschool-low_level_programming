#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints error message and exits with given code
 * @code: The exit code
 * @message: The error message format
 * @arg: The argument to include in the error message
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * copy_file - Copies contents from one file to another
 * @file_from: Source file name
 * @file_to: Destination file name
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	while (1)
	{
		read_bytes = read(fd_from, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(98, "Error: Can't read from file %s\n", file_from);
		}
		if (read_bytes == 0)
			break;

		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_to);
}

/**
 * main - Entry point, checks arguments and calls copy_file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	copy_file(argv[1], argv[2]);

	return (0);
}

