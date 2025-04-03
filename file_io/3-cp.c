#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with a code
 * @code: Exit code
 * @message: Error message format
 * @arg: Argument to include in error message
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * copy_file - Copies content from one file to another
 * @file_from: Source file
 * @file_to: Destination file
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

	read_bytes = read(fd_from, buffer, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", file_to);
		}
		read_bytes = read(fd_from, buffer, BUFFER_SIZE);
	}

	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - Entry point. Checks arguments and copies file.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with various codes on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	copy_file(argv[1], argv[2]);

	return (0);
}

