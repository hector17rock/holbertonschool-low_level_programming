#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - Prints an error message to stderr and exits
 * @code: Exit code
 * @message: Error message
 * @file: Name of the file involved in the error
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}

/**
 * close_fd - Closes a file descriptor and checks for errors
 * @fd: File descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies content from one file to another
 * @file_from: Source file
 * @file_to: Destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", file_to);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			error_exit(99, "Error: Can't write to", file_to);
	}

	if (r == -1)
		error_exit(98, "Error: Can't read from file", file_from);

	close_fd(fd_from);
	close_fd(fd_to);
}

/**
 * main - Entry point. Copies contents of a file to another file.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or exits with relevant error code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

