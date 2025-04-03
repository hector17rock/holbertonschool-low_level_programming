#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void close_fd(int fd);
void print_error(const char *msg, const char *file, int code);

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		print_error("Error: Can't write to", argv[2], 98);
	}

	while (1)
	{
		rd = read(fd_from, buf, 1024);
		if (rd == -1)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error("Error: Can't read from file", argv[1], 98);
		}
		if (rd == 0)
			break;

		wr = write(fd_to, buf, rd);
		if (wr != rd)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error("Error: Can't write to", argv[2], 98);
		}
	}

	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}

/**
 * close_fd - Closes a file descriptor with error handling.
 * @fd: The file descriptor to close.
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
 * print_error - Prints an error message and exits.
 * @msg: The error message.
 * @file: The file name related to the error.
 * @code: The exit code to use.
 */
void print_error(const char *msg, const char *file, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(code);
}

