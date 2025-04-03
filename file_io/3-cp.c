#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(const char *msg, const char *file, int code);
void close_fd(int fd);

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, exits with code on failure
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error_and_exit("Usage: cp file_from file_to", NULL, 97);

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		print_error_and_exit("Error: Can't read from file", av[1], 98);

	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		close_fd(from_fd);
		print_error_and_exit("Error: Can't write to", av[2], 99);
	}

	while (1)
	{
		r_bytes = read(from_fd, buffer, BUFFER_SIZE);
		if (r_bytes == -1)
		{
			close_fd(from_fd);
			close_fd(to_fd);
			print_error_and_exit("Error: Can't read from file", av[1], 98);
		}
		if (r_bytes == 0)
			break;

		w_bytes = write(to_fd, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			close_fd(from_fd);
			close_fd(to_fd);
			print_error_and_exit("Error: Can't write to", av[2], 99);
		}
	}

	close_fd(from_fd);
	close_fd(to_fd);

	return (0);
}

/**
 * print_error_and_exit - Prints an error message and exits
 * @msg: Error message
 * @file: File name (can be NULL)
 * @code: Exit code
 */
void print_error_and_exit(const char *msg, const char *file, int code)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * close_fd - Closes a file descriptor and handles error
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

