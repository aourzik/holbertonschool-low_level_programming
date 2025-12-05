#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor
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
 * write_buffer - writes a buffer to a file
 * @fd_to: destination file descriptor
 * @buffer: buffer to write
 * @r: number of bytes read
 */
void write_buffer(int fd_to, char *buffer, ssize_t r)
{
	ssize_t w = write(fd_to, buffer, r);

	if (w == -1 || w != r)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", "file_to");
		exit(99);
	}
}

/**
 * open_files - opens the source and destination files
 * @from: source file
 * @to: destination file
 * @fd_from: pointer to source fd
 * @fd_to: pointer to destination fd
 */
void open_files(const char *from, const char *to, int *fd_from, int *fd_to)
{
	*fd_from = open(from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	*fd_to = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
}

/**
 * copy_file - copies content from one file to another
 * @from: source file
 * @to: destination file
 */
void copy_file(const char *from, const char *to)
{
	int fd_from, fd_to;
	ssize_t r;
	char buffer[BUFFER_SIZE];

	open_files(from, to, &fd_from, &fd_to);

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		write_buffer(fd_to, buffer, r);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	close_fd(fd_from);
	close_fd(fd_to);
}

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(av[1], av[2]);
	return (0);
}
