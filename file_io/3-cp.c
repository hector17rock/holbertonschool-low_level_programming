#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * open_file - Opens a file and returns the file descriptor
 * @filename: Name of the file
 * @flags: Flags for opening the file
 * @mode: Mode for creating a file, if applicable
 *
 * Return: File descriptor or -1 on failure
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd;

	if (flags & O_CREAT)
	{
		fd = open(filename, flags, mode);
	}
	else
	{
		fd = open(filename, flags);
	}

	return (fd);
}

/**
 * copy_file - Copies contents from the source file to the destination file
 * @source_fd: File descriptor of the source file
 * @dest_fd: File descriptor of the destination file
 */
void copy_file(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99); /* Exit with an error code */
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98); /* Exit with an error code */
	}
}

/**
 * main - Copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file dest_file\n");
		exit(97);
	}

	source_fd = open_file(argv[1], O_RDONLY, 0);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(source_fd);
		exit(99);
	}

	copy_file(source_fd, dest_fd);

	close(source_fd);
	close(dest_fd);
	return (0);
}
