#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdint.h>

/**
 * error_handler - handles all error cases and exits
 * @error_code: the type of error (97-100)
 * @arg1: primary argument (filename or fd)
 * @arg2: secondary argument (fd_from for write error, NULL for others)
 *
 * Return: Never returns
 */
void error_handler(int error_code, void *arg1, int arg2)
{
	char *filename;
	int fd;

	switch (error_code)
	{
	case 97: /* Usage error */
		filename = (char *)arg1;
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98: /* Read error */
		filename = (char *)arg1;
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	case 99: /* Write error */
		filename = (char *)arg1;
		fd = arg2;
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		close(fd);
		exit(99);
	case 100: /* Close error */
		fd = *((int *)&arg1);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	default:
		exit(1);
	}
}

/**
 * copy_file - copies content from one file to another
 * @fd_from: file descriptor for source file
 * @fd_to: file descriptor for destination file
 * @file_from: source file name
 * @file_to: destination file name
 *
 * Return: 0 on success
 */
int copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	int rd, wr;
	char buffer[1024];

	while (1)
	{
		rd = read(fd_from, buffer, 1024);
		if (rd == -1)
		{
			close(fd_to);
			error_handler(98, file_from, 0);
		}

		if (rd == 0)
			break;

		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			close(fd_to);
			error_handler(99, file_to, fd_from);
		}
	}

	return (0);
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or exit code on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		error_handler(97, av[0], 0);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(98, av[1], 0);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		error_handler(99, av[2], fd_from);

	copy_file(fd_from, fd_to, av[1], av[2]);

	if (close(fd_from) == -1)
		error_handler(100, (void *)(intptr_t)fd_from, 0);

	if (close(fd_to) == -1)
		error_handler(100, (void *)(intptr_t)fd_to, 0);

	return (0);
}
